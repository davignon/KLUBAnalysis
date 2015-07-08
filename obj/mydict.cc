// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dOdOdIobjdImydict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "../interface/Sample.h"
#include "../interface/UserSample.h"
#include "../interface/W.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *Sample_Dictionary();
   static void Sample_TClassManip(TClass*);
   static void *new_Sample(void *p = 0);
   static void *newArray_Sample(Long_t size, void *p);
   static void delete_Sample(void *p);
   static void deleteArray_Sample(void *p);
   static void destruct_Sample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Sample*)
   {
      ::Sample *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Sample));
      static ::ROOT::TGenericClassInfo 
         instance("Sample", "Sample.h", 19,
                  typeid(::Sample), DefineBehavior(ptr, ptr),
                  &Sample_Dictionary, isa_proxy, 0,
                  sizeof(::Sample) );
      instance.SetNew(&new_Sample);
      instance.SetNewArray(&newArray_Sample);
      instance.SetDelete(&delete_Sample);
      instance.SetDeleteArray(&deleteArray_Sample);
      instance.SetDestructor(&destruct_Sample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Sample*)
   {
      return GenerateInitInstanceLocal((::Sample*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Sample*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Sample_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Sample*)0x0)->GetClass();
      Sample_TClassManip(theClass);
   return theClass;
   }

   static void Sample_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *UserSample_Dictionary();
   static void UserSample_TClassManip(TClass*);
   static void *new_UserSample(void *p = 0);
   static void *newArray_UserSample(Long_t size, void *p);
   static void delete_UserSample(void *p);
   static void deleteArray_UserSample(void *p);
   static void destruct_UserSample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserSample*)
   {
      ::UserSample *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::UserSample));
      static ::ROOT::TGenericClassInfo 
         instance("UserSample", "UserSample.h", 8,
                  typeid(::UserSample), DefineBehavior(ptr, ptr),
                  &UserSample_Dictionary, isa_proxy, 0,
                  sizeof(::UserSample) );
      instance.SetNew(&new_UserSample);
      instance.SetNewArray(&newArray_UserSample);
      instance.SetDelete(&delete_UserSample);
      instance.SetDeleteArray(&deleteArray_UserSample);
      instance.SetDestructor(&destruct_UserSample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserSample*)
   {
      return GenerateInitInstanceLocal((::UserSample*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::UserSample*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *UserSample_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::UserSample*)0x0)->GetClass();
      UserSample_TClassManip(theClass);
   return theClass;
   }

   static void UserSample_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *W_Dictionary();
   static void W_TClassManip(TClass*);
   static void *new_W(void *p = 0);
   static void *newArray_W(Long_t size, void *p);
   static void delete_W(void *p);
   static void deleteArray_W(void *p);
   static void destruct_W(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::W*)
   {
      ::W *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::W));
      static ::ROOT::TGenericClassInfo 
         instance("W", "W.h", 9,
                  typeid(::W), DefineBehavior(ptr, ptr),
                  &W_Dictionary, isa_proxy, 0,
                  sizeof(::W) );
      instance.SetNew(&new_W);
      instance.SetNewArray(&newArray_W);
      instance.SetDelete(&delete_W);
      instance.SetDeleteArray(&deleteArray_W);
      instance.SetDestructor(&destruct_W);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::W*)
   {
      return GenerateInitInstanceLocal((::W*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::W*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *W_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::W*)0x0)->GetClass();
      W_TClassManip(theClass);
   return theClass;
   }

   static void W_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_Sample(void *p) {
      return  p ? new(p) ::Sample : new ::Sample;
   }
   static void *newArray_Sample(Long_t nElements, void *p) {
      return p ? new(p) ::Sample[nElements] : new ::Sample[nElements];
   }
   // Wrapper around operator delete
   static void delete_Sample(void *p) {
      delete ((::Sample*)p);
   }
   static void deleteArray_Sample(void *p) {
      delete [] ((::Sample*)p);
   }
   static void destruct_Sample(void *p) {
      typedef ::Sample current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Sample

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserSample(void *p) {
      return  p ? new(p) ::UserSample : new ::UserSample;
   }
   static void *newArray_UserSample(Long_t nElements, void *p) {
      return p ? new(p) ::UserSample[nElements] : new ::UserSample[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserSample(void *p) {
      delete ((::UserSample*)p);
   }
   static void deleteArray_UserSample(void *p) {
      delete [] ((::UserSample*)p);
   }
   static void destruct_UserSample(void *p) {
      typedef ::UserSample current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserSample

namespace ROOT {
   // Wrappers around operator new
   static void *new_W(void *p) {
      return  p ? new(p) ::W : new ::W;
   }
   static void *newArray_W(Long_t nElements, void *p) {
      return p ? new(p) ::W[nElements] : new ::W[nElements];
   }
   // Wrapper around operator delete
   static void delete_W(void *p) {
      delete ((::W*)p);
   }
   static void deleteArray_W(void *p) {
      delete [] ((::W*)p);
   }
   static void destruct_W(void *p) {
      typedef ::W current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::W

namespace {
  void TriggerDictionaryInitialization_mydict_Impl() {
    static const char* headers[] = {
"../interface/Sample.h",
"../interface/UserSample.h",
"../interface/W.h",
0
    };
    static const char* includePaths[] = {
"../interface/",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/cms/cmssw/CMSSW_7_4_5/external/slc6_amd64_gcc491/bin/../../../../../../lcg/root/6.02.00-odfocd4/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc491/lcg/root/6.02.00-odfocd4/include",
"/grid_mnt/data__data.polcms/cms/davignon/KLUBAnalysis/CMSSW_7_4_5/src/KLUBAnalysis/src/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$../interface/Sample.h")))  Sample;
class __attribute__((annotate("$clingAutoload$../interface/UserSample.h")))  UserSample;
class __attribute__((annotate("$clingAutoload$../interface/W.h")))  W;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "../interface/Sample.h"
#include "../interface/UserSample.h"
#include "../interface/W.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Sample", payloadCode, "@",
"UserSample", payloadCode, "@",
"W", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("mydict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_mydict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_mydict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_mydict() {
  TriggerDictionaryInitialization_mydict_Impl();
}
