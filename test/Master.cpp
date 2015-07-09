#include <cstdlib>
#include <iostream> 
#include <fstream>
#include <sstream>
#include <map>
#include <string>

#include "TChain.h"
#include "TEntryList.h"
#include "TMath.h"
#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TObjString.h"
#include "TSystem.h"
#include "TROOT.h"
#include "TPluginManager.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TH1.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TPad.h"
#include "TF1.h"
#include "TLegend.h"
#include "THStack.h"
#include "TCut.h"
#include "TArrayF.h"
#include "TStyle.h"
#include "UserSample.h"
#include "W.h"
#include "VBF.h"

#define Dummy true

using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////
void DummyFunction()
{

}

///////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, const char* argv[])
{
  
  
  
  //Dealing with W
  W* W_ = new W();
  W_->InitializeTree(kTRUE, "W","/data_CMS/cms/davignon/Ntuples_RunII/VBFH125/Ntuples_TruthInfo/HTauTauAnalysis_*.root");
  TH1F* hW = W_->ReturnShape("hW","pt_1","");
  Double_t normW = W_->ReturnNormalization("");

  //Dealing with VBF
  VBF* VBF_ = new VBF();
  VBF_->InitializeTree(kTRUE, "VBF","/data_CMS/cms/davignon/Ntuples_RunII/VBFH125/Ntuples_TruthInfo/HTauTauAnalysis_*.root");
  TH1F* hVBF = VBF_->ReturnShape("hVBF","pt_1","");
  Double_t normVBF = VBF_->ReturnNormalization("");

  TH1F* hVBF_ptCut = VBF_->ReturnShape("hVBF_ptCut","pt_1","pt_1>50.");
  Double_t normVBF_ptCut = VBF_->ReturnNormalization("pt_1>50.");

  TFile OutputHistograms("myHistograms.root","RECREATE");
  hW->Write();
  hVBF->Write();
  hVBF_ptCut->Write();

  // TCanvas c1("c1","c1",800.,800.);
  // c1.SaveAs("test.pdf");

  return 0;
}

