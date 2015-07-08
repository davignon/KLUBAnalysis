#define UserSample_cxx
#include "UserSample.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void UserSample::InitializeTree()
{
  TChain* temp = new TChain("HTauTauTree/HTauTauTree");
  SampleChain = (TChain*)temp->Clone();
 
  SampleChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);

  AddFilesToTree();
 
  return ;
}

void UserSample::AddFilesToTree()
{
  SampleChain->Add("/data_CMS/cms/davignon/Ntuples_RunII/VBFH125/Ntuples_TruthInfo/HTauTauAnalysis_*.root");
  
  return ;
}
