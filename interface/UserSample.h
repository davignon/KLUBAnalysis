#ifndef UserSample_h
#define UserSample_h
#include <TROOT.h>
#include <TH1.h>
#include <TChain.h>
#include <TFile.h>
#include "vector"

using namespace std;

class UserSample {
public :
  UserSample();
  virtual ~UserSample();
  void InitializeTree(Bool_t CreateAnalysisTree, TString Name, TString LocationOfFiles);
  void AddFilesToTree(TString LocationOfFiles);
  void ProduceAnalysisFlatTree(TString FileName);
  TH1F* ReturnShape(TString HistoName, TString Variable, TString Cuts);
  Double_t ReturnNormalization(TString Cuts);
  
  TChain* m_SampleChain;
  TString m_SampleName;
  TString m_AnalysisFlatTreeFileName;
  TString m_AnalysisFlatTreeName;
  Double_t m_Yield;
  Bool_t m_isNormFromMC;
 
};
#endif
#ifdef UserSample_cxx
UserSample::UserSample()
{

}

UserSample::~UserSample()
{
  
}
#endif
