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
#include "ConfigParser.h"

#define Dummy true

using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////
void FetchConfigForProcess(ConfigParser *gConfigParser, string Process, TString *Name, TString *Location, float *XS, float *FilterEfficiency, float *GeneratedEvents)
{
  TString s_tmp ;
  float f_tmp ;
  TString Fetch ;

  Fetch = Process + "::" + "Name";
  s_tmp = TString(gConfigParser -> readStringOption(Fetch.Data()));
  *Name = s_tmp;

  Fetch = Process + "::" + "NtuplesLocation";
  s_tmp = TString(gConfigParser -> readStringOption(Fetch.Data()));
  *Location = s_tmp;

  Fetch = Process + "::" + "XS";
  f_tmp = gConfigParser -> readFloatOption(Fetch.Data());
  *XS = f_tmp;

  Fetch = Process + "::" + "FilterEfficiency";
  f_tmp = gConfigParser -> readFloatOption(Fetch.Data());
  *FilterEfficiency = f_tmp;

  Fetch = Process + "::" + "GeneratedEvents";
  f_tmp = gConfigParser -> readFloatOption(Fetch.Data());
  *GeneratedEvents = f_tmp;

  return ;
}

///////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, const char* argv[])
{
  if(argc < 2){
    cerr<<"Forgot to parse the cfg file --> exit "<<endl;
    return -1;
  }
  
  gConfigParser = new ConfigParser();
  TString config_ProccessesAndXS ; 
  config_ProccessesAndXS.Form("%s",argv[1]);

  if(!(gConfigParser->init(config_ProccessesAndXS))){
      cout << ">>> parseConfigFile::Could not open configuration file " << config_ProccessesAndXS << endl;
      return -1;
  }

  string Analysis = gConfigParser->readStringOption("General::Analysis");
  string Channel = gConfigParser->readStringOption("General::Channel");
  float Lumi = gConfigParser->readFloatOption("General::Lumi");
  bool ProduceFlatTrees = gConfigParser->readBoolOption("General::ProduceFlatTrees");
  vector<string> BaselineSelection = gConfigParser->readStringListOption("General::BaselineSelection");

  cout<<"---- RUNNING ----"<<endl;
  cout<<"  Analysis            : "<<Analysis<<endl;
  cout<<"  Channel             : "<<Channel<<endl;
  cout<<"  ProduceFlatTrees?   : "<<ProduceFlatTrees<<endl;
  cout<<"  Lumi                : "<<Lumi<<endl;
  // cout<<"  BaselineSelection   : "<<BaselineSelection<<endl;

  /*
  TString FormatedBaselineSelection = "";
  for(UInt_t iSel = 0 ; iSel < BaselineSelection.size() ; ++iSel)
    {
      TString temp = BaselineSelection.at(iSel);
      ReplaceAll(const char* s1, Ssiz_t ls1, const char* s2, Ssiz_t ls2)

    }
  */

  vector<string> ListOfProcesses = gConfigParser->readStringListOption("General::ListOfProcesses");


  Bool_t useVBF125, useW = kFALSE ;

  for(UInt_t iProcess = 0 ; iProcess <  ListOfProcesses.size() ; ++iProcess)
    {
      if(ListOfProcesses.at(iProcess)=="VBF125") useVBF125 = kTRUE;
      else if(ListOfProcesses.at(iProcess)=="W") useW = kTRUE;
    }

  TString Name = "";
  TString Location  = ""; 
  float XS = 1.0;
  float FilterEfficiency = 1.0;
  float GeneratedEvents  = 1.0;

  W* W_ = new W();
  VBF* VBF_125_ = new VBF();

  TH1F* hW ;
  TH1F* hVBF ;

  Double_t normW ;
  Double_t normVBF125;

  //Dealing with W
  if(useW)
    {
      FetchConfigForProcess(gConfigParser, "W", &Name, &Location, &XS, &FilterEfficiency, &GeneratedEvents);
      W_->InitializeTree(ProduceFlatTrees, Name, Location, XS, FilterEfficiency, GeneratedEvents);

      hW = W_->ReturnShape("hW","pt_1","");
      normW = W_->ReturnNormalization("",Lumi);
    }

  //Dealing with VBF
  if(useVBF125)
    {
      FetchConfigForProcess(gConfigParser, "VBF125", &Name, &Location, &XS, &FilterEfficiency, &GeneratedEvents);
      VBF_125_->InitializeTree(ProduceFlatTrees, Name, Location, XS, FilterEfficiency, GeneratedEvents);

      hVBF = VBF_125_->ReturnShape("hVBF","pt_1","");
      normVBF125 = VBF_125_->ReturnNormalization("",Lumi);
    }

  TFile OutputHistograms("myHistograms.root","RECREATE");
  if(useW) hW->Write();
  if(useVBF125) hVBF->Write();






  // TCanvas c1("c1","c1",800.,800.);
  // c1.SaveAs("test.pdf");
  
  return 0;
}

