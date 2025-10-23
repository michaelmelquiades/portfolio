from PyQt6.QtWidgets import (
    QApplication, QWidget, QLineEdit, QPushButton, QVBoxLayout, 
    QLabel, QGridLayout, QFrame, QMainWindow, QTextEdit, QSplitter, 
    QHBoxLayout, QCheckBox, QFileDialog, QComboBox, QMessageBox
)
from PyQt6.QtCore import Qt, QProcess
import sys
import numpy as np
import prompt_schemas as ps


class PathSelector(QWidget):
    def __init__(self, placeholder="Enter path or browse...", parent=None):
        super().__init__(parent)
        layout = QHBoxLayout(self)
        layout.setContentsMargins(0, 0, 0, 0)

        self.line_edit = QLineEdit(self, placeholderText=placeholder)
        browse_button = QPushButton("Browse", self)
        browse_button.clicked.connect(self.browse_path)

        layout.addWidget(self.line_edit)
        layout.addWidget(browse_button)

    def browse_path(self):
        file_path, _ = QFileDialog.getOpenFileName(self, "Select File", "", "All Files (*)")
        if file_path:
            self.line_edit.setText(file_path)
            return

        dir_path = QFileDialog.getExistingDirectory(self, "Select Directory")
        if dir_path:
            self.line_edit.setText(dir_path)

    def get_path(self):
        return self.line_edit.text()
    


class MainWindow(QMainWindow):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)

        # Set up the main window
        self.setWindowTitle("LLM Project Test")
        self.resize(1200, 800)
        QApplication.setStyle("cleanlooks")
        
        # Set up the left panel with buttons, text bits, etc
        left = QFrame()
        layout = QVBoxLayout()
        left.setFrameShape(QFrame.Shape.StyledPanel)
        left.setLayout(layout)

        text_layout = QGridLayout()
        self.ana_path = PathSelector("Enter Analysis Path...")
        self.model_path = PathSelector("Enter Model Path...")
        self.ex_path = PathSelector("Path to text examples...")
        self.rag_path = PathSelector("Path to RAG samples...")

        cboxlayout = QHBoxLayout()
        self.xshot_check = QCheckBox("X-Shot Prompting")
        self.rag_check = QCheckBox("RAG")
        cboxlayout.addWidget(self.xshot_check)
        cboxlayout.addWidget(self.rag_check)

        pp_temp_layout = QVBoxLayout()
        topp_label = QLabel("Set top_p value:")
        temp_label = QLabel("Set temperature value:")
        values = [str(round(i, 1)) for i in np.arange(0., 1., 0.1)]
        pp_temp_button_layout = QHBoxLayout()
        pp_temp_label_layout = QHBoxLayout()
        self.topp_combo = QComboBox()
        self.temp_combo = QComboBox()
        self.topp_combo.addItems(values)
        self.temp_combo.addItems(values)
        self.topp_combo.setCurrentIndex(5)
        self.temp_combo.setCurrentIndex(3)
        
        pp_temp_label_layout.addWidget(topp_label)
        pp_temp_label_layout.addWidget(temp_label)
        pp_temp_button_layout.addWidget(self.topp_combo)
        pp_temp_button_layout.addWidget(self.temp_combo)
        pp_temp_layout.addLayout(pp_temp_label_layout)
        pp_temp_layout.addLayout(pp_temp_button_layout)

        self.schema_path = PathSelector("Path to output schema...")
        self.output_path = PathSelector("Path to save results to...")

        layout.addWidget(QLabel("*Analysis Path:"))
        layout.addWidget(self.ana_path)
        layout.addWidget(QLabel("Model Path:"))
        layout.addWidget(self.model_path)
        layout.addWidget(QLabel("Examples Path:"))
        layout.addWidget(self.ex_path)
        layout.addLayout(cboxlayout)
        layout.addWidget(QLabel("RAG Path:"))
        layout.addWidget(self.rag_path)
        layout.addLayout(pp_temp_layout)
        layout.addWidget(QLabel("Schema Path:"))
        layout.addWidget(self.schema_path)
        layout.addWidget(QLabel("Output Path:"))
        layout.addWidget(self.output_path)
        
        bot = QFrame()
        bot.setFrameShape(QFrame.Shape.StyledPanel)

        # Right side of the window with the two text boxes
        self.system_prompt = QTextEdit()
        self.system_prompt.setPlaceholderText(ps.GEN_SYSTEM_PROMPT)
        self.system_prompt.setText(ps.GEN_SYSTEM_PROMPT)
        self.instr_prompt = QTextEdit()
        self.instr_prompt.setPlaceholderText(ps.GEN_INSTRUCT_PROMPT)
        self.instr_prompt.setText(ps.GEN_INSTRUCT_PROMPT)

        splitter1 = QSplitter(Qt.Orientation.Horizontal)
        splitter1.addWidget(left)
        
        splitter2 = QSplitter(Qt.Orientation.Vertical)
        splitter2.addWidget(QLabel("System Prompt"))
        splitter2.addWidget(self.system_prompt)
        splitter2.addWidget(QLabel("Instruction Prompt"))
        splitter2.addWidget(self.instr_prompt)
        splitter1.addWidget(splitter2)

        self.run_button = QPushButton("Run Model")
        self.run_button.pressed.connect(self.start_process)

        self.output = QTextEdit()
        #self.output.setFixedSize(1200, 100)

        central_widget = QWidget()
        vbox = QVBoxLayout(central_widget)
        vbox.addWidget(splitter1)
        vbox.addWidget(self.run_button)
        vbox.addWidget(QLabel("Output:"))
        vbox.addWidget(self.output)
        self.setCentralWidget(central_widget)

        splitter1.setSizes([600,600])
        
        self.show()

    def start_process(self):
        self.output.append("Executing process...")
        self.p = QProcess()
        self.p.setProcessChannelMode(QProcess.ProcessChannelMode.MergedChannels)

        self.p.readyReadStandardOutput.connect(self.handle_stdout)
        self.p.readyReadStandardError.connect(self.handle_stderr)
        self.p.finished.connect(self.process_finished)

        analysis_path = self.ana_path.get_path().strip()
        if not analysis_path:
            QMessageBox.warning(self, "Missing Input", "Please provide an Analysis Path.")
            print("[Error] Analysis path is required.")
            return

        model_path = self.model_path.get_path().strip() or "meta-llama/Llama-3.2-1B-Instruct"
        system_prompt = self.system_prompt.toPlainText().strip() or ps.GEN_SYSTEM_PROMPT
        instruction_prompt = self.instr_prompt.toPlainText().strip() or ps.GEN_INSTRUCT_PROMPT

        cmd = [
            "python", "main.py",
            "--analysis_path", analysis_path, 
            "--model_path", model_path,
            "--temperature", self.temp_combo.currentText(),
            "--top_p", self.topp_combo.currentText(),
            "--system_prompt", system_prompt,
            "--instruction_prompt", instruction_prompt
        ]

        if self.ex_path.get_path():
            cmd += ["--example_path", self.ex_path.get_path()]
        if self.schema_path.get_path():
            cmd += ["--output_schema", self.schema_path.get_path()]
        if self.output_path.get_path():
            cmd += ["--output_path", self.output_path.get_path()]
        if self.rag_check.isChecked():
            cmd.append("--rag_on")
            if self.rag_path.get_path():
                cmd += ["--rag_data", self.rag_path.get_path()]
            elif self.ex_path.get_path():
                cmd += ["--rag_data", self.ex_path.get_path()]
            else:
                print("[Error] No RAG path selected!")
                return
        if self.xshot_check.isChecked():
            cmd.append("--add_shot_prompting")
            if not self.ex_path.get_path():
                print("[Error] No X-shot examples given")
                return
            
        self.p.start(cmd[0], cmd[1:])

    def handle_stdout(self):
        data = self.p.readAllStandardOutput().data().decode()
        print(data, end="")
        self.output.append(data)

    def handle_stderr(self):
        data = self.p.readAllStandardError().data().decode()
        print(data, end="")
        self.output.append(data)

    def process_finished(self):
        print("Process finished.")

if __name__ == "__main__":
    app = QApplication(sys.argv)

    window = MainWindow()

    sys.exit(app.exec())