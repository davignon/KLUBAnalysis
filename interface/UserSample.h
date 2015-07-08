#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "vector"

using namespace std;

class UserSample {
public :
  UserSample();
  virtual ~UserSample();
  void InitializeTree();
  void AddFilesToTree();

  TChain* SampleChain;

  Int_t EventNumber;
  TBranch *b_EventNumber;
  

};

#ifdef UserSample_cxx
UserSample::UserSample()
{

}

UserSample::~UserSample()
{
  
}
#endif
