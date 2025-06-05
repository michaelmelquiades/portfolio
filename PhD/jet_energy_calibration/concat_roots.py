import ROOT

def main(model = 'A'):
	#outFile = ROOT.TFile(f'concat_model{model}.root', 'RECREATE')
	treename = 'nominal_0'
	dir_name = '/eos/user/n/nlalloue/signals/Model'
	vals = [1500, 1750, 2000, 2250, 2500, 3000, 3500]
	ch = ROOT.TChain(treename)
	for i in range(len(vals)):
		name = dir_name+str(model)+'_'+str(vals[i])+'.root'
		ch.Add(name)

	ch.Merge('concat_model'+model+'.root')

if __name__ == '__main__':
	main()
