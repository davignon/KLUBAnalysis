#production 13-07-2015: hadronic tau isolation a factor two looser than baseline (e.g. EHad/MuHad<3GeV HadHad<2GeV )
python scripts/skimNtuple.py -o /data_CMS/cms/salerno/HH_samples/SKIM_DY              -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_DY_-1Events_0Skipped_1436202480.82                                         -x 6025.2 -f true
python scripts/skimNtuple.py -o /data_CMS/cms/salerno/HH_samples/SKIM_T-tchannel      -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_T-tchannel_-1Events_0Skipped_1436273546.02                                 -x 70.69  -f true
python scripts/skimNtuple.py -o /data_CMS/cms/salerno/HH_samples/SKIM_TTJets          -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_TTJets_-1Events_0Skipped_1436202407.03                                     -x 831.76 -f true
python scripts/skimNtuple.py -o /data_CMS/cms/salerno/HH_samples/SKIM_TTTo2L2Nu       -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_TTTo2L2Nu_-1Events_0Skipped_1436365326.97                                  -x 77.55  -f true
python scripts/skimNtuple.py -o /data_CMS/cms/salerno/HH_samples/SKIM_TW              -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_TW_-1Events_0Skipped_1436202748.18                                         -x 71.2   -f true
python scripts/skimNtuple.py -o /data_CMS/cms/salerno/HH_samples/SKIM_WW2l2v          -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_WW2l2v-powheg_-1Events_0Skipped_1436273209.4                               -x 10.481 -f true
python scripts/skimNtuple.py -o /data_CMS/cms/salerno/HH_samples/SKIM_WWlvqq          -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_WWlvqq-powheg_-1Events_0Skipped_1436273743.21                              -x 43.53  -f true
python scripts/skimNtuple.py -o /data_CMS/cms/salerno/HH_samples/SKIM_HHLambda20      -i /data_CMS/cms/cadamuro/test_submit_to_tier3/HiggsTauTauOutput_HH_Lambda20_NoSvfit_Prod5Lug2015_300000Events_0Skipped_1436090974.69     -x 3.605  -f true
python scripts/skimNtuple.py -o /data_CMS/cms/salerno/HH_samples/SKIM_HHLambda2dot46  -i /data_CMS/cms/cadamuro/test_submit_to_tier3/HiggsTauTauOutput_HH_Lambda2dot46_NoSvFit_Prod5Lug2015_300000Events_0Skipped_1436090991.56 -x 0.0144 -f true
python scripts/skimNtuple.py -o /data_CMS/cms/salerno/HH_samples/SKIM_HHLambdam4      -i /data_CMS/cms/cadamuro/test_submit_to_tier3/HiggsTauTauOutput_HH_Lambdam4_NoSvFit_Prod5Lug2015_300000Events_0Skipped_1436091004.38     -x 0.4116 -f true
python scripts/skimNtuple.py -o /data_CMS/cms/salerno/HH_samples/SKIM_HHLambda1       -i /data_CMS/cms/cadamuro/test_submit_to_tier3/HiggsTauTauOutput_HH_Lambda1_Fix_10Lug2015_300000Events_0Skipped_1436545696.05             -x 0.0343 -f true

# LO inclusive samples, listed in the Htautau twiki page

python scripts/skimNtuple.py -o /data_CMS/cms/govoni/test_submit_to_tier3/SKIM_WW_TuneCUETP8M1 -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_WW_TuneCUETP8M1_-1Events_0Skipped_1437569742.59 -x 63.21
python scripts/skimNtuple.py -o /data_CMS/cms/govoni/test_submit_to_tier3/SKIM_WZ_TuneCUETP8M1 -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_WZ_TuneCUETP8M1_-1Events_0Skipped_1437569799.12 -x 22.82
python scripts/skimNtuple.py -o /data_CMS/cms/govoni/test_submit_to_tier3/SKIM_ZZ_TuneCUETP8M1 -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_ZZ_TuneCUETP8M1_-1Events_0Skipped_1437569809.43 -x 10.32

# for these following three we still don't know the XS

python scripts/skimNtuple.py -o /data_CMS/cms/govoni/test_submit_to_tier3/SKIM_WWlvqq_mg5nlo    -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_WZTo1L1Nu2Q_-1Events_0Skipped_1437551711.24 -x FIXME
python scripts/skimNtuple.py -o /data_CMS/cms/govoni/test_submit_to_tier3/SKIM_WZTo2L2Q_mg5nlo  -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_WZTo2L2Q_-1Events_0Skipped_1437555467.58    -x FIXME
python scripts/skimNtuple.py -o /data_CMS/cms/govoni/test_submit_to_tier3/SKIM_ZZTo2L2Q_mg5nlo  -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_ZZTo2L2Q_-1Events_0Skipped_1437554987.36    -x FIXME

# data, generated by Luca with the DCS Json before EPS

python scripts/skimNtuple.py -d True -o /data_CMS/cms/govoni/test_submit_to_tier3/SKIM_Data_SingleElectron -i /data_CMS/cms/cadamuro/test_submit_to_tier3/HiggsTauTauOutput_Data_SingleElectron_-1Events_0Skipped_1437412814.56
python scripts/skimNtuple.py -d True -o /data_CMS/cms/govoni/test_submit_to_tier3/SKIM_Data_SingleMuon     -i /data_CMS/cms/cadamuro/test_submit_to_tier3/HiggsTauTauOutput_Data_SingleMuon_-1Events_0Skipped_1437412858.02
python scripts/skimNtuple.py -d True -o /data_CMS/cms/govoni/test_submit_to_tier3/SKIM_Data_DoubleEG       -i /data_CMS/cms/cadamuro/test_submit_to_tier3/HiggsTauTauOutput_Data_DoubleEG_-1Events_0Skipped_1437412767.91
python scripts/skimNtuple.py -d True -o /data_CMS/cms/govoni/test_submit_to_tier3/SKIM_Data_DoubleMuon     -i /data_CMS/cms/cadamuro/test_submit_to_tier3/HiggsTauTauOutput_Data_DoubleMuon_-1Events_0Skipped_1437412741.24
python scripts/skimNtuple.py -d True -o /data_CMS/cms/govoni/test_submit_to_tier3/SKIM_Data_SinglMu        -i /data_CMS/cms/cadamuro/test_submit_to_tier3/HiggsTauTauOutput_Data_SinglMu_-1Events_0Skipped_1437412835.38

# skimming inclusively, i.e. without requirements on jets

python scripts/skimNtuple.py -I True -o /data_CMS/cms/govoni/test_submit_to_tier3/InclusiveSkims/SKIM_DY              -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_DY_-1Events_0Skipped_1436202480.82                                         -x 6025.2 
python scripts/skimNtuple.py -I True -o /data_CMS/cms/govoni/test_submit_to_tier3/InclusiveSkims/SKIM_T-tchannel      -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_T-tchannel_-1Events_0Skipped_1436273546.02                                 -x 70.69  
python scripts/skimNtuple.py -I True -o /data_CMS/cms/govoni/test_submit_to_tier3/InclusiveSkims/SKIM_TTJets          -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_TTJets_-1Events_0Skipped_1436202407.03                                     -x 831.76 
python scripts/skimNtuple.py -I True -o /data_CMS/cms/govoni/test_submit_to_tier3/InclusiveSkims/SKIM_TW              -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_TW_-1Events_0Skipped_1436202748.18                                         -x 71.2   
python scripts/skimNtuple.py -I True -o /data_CMS/cms/govoni/test_submit_to_tier3/InclusiveSkims/SKIM_HHLambda20      -i /data_CMS/cms/cadamuro/test_submit_to_tier3/HiggsTauTauOutput_HH_Lambda20_NoSvfit_Prod5Lug2015_300000Events_0Skipped_1436090974.69     -x 3.605  
python scripts/skimNtuple.py -I True -o /data_CMS/cms/govoni/test_submit_to_tier3/InclusiveSkims/SKIM_WW_TuneCUETP8M1 -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_WW_TuneCUETP8M1_-1Events_0Skipped_1437569742.59                            -x 63.21
python scripts/skimNtuple.py -I True -o /data_CMS/cms/govoni/test_submit_to_tier3/InclusiveSkims/SKIM_WZ_TuneCUETP8M1 -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_WZ_TuneCUETP8M1_-1Events_0Skipped_1437569799.12                            -x 22.82
python scripts/skimNtuple.py -I True -o /data_CMS/cms/govoni/test_submit_to_tier3/InclusiveSkims/SKIM_ZZ_TuneCUETP8M1 -i /data_CMS/cms/govoni/test_submit_to_tier3/HiggsTauTauOutput_ZZ_TuneCUETP8M1_-1Events_0Skipped_1437569809.43                            -x 10.32

python scripts/skimNtuple.py -d True -I True -o /data_CMS/cms/govoni/test_submit_to_tier3/InclusiveSkims/SKIM_Data_SingleMuon     -i /data_CMS/cms/cadamuro/test_submit_to_tier3/HiggsTauTauOutput_Data_SingleMuon_-1Events_0Skipped_1437412858.02
python scripts/skimNtuple.py -d True -I True -o /data_CMS/cms/govoni/test_submit_to_tier3/InclusiveSkims/SKIM_Data_SingleElectron -i /data_CMS/cms/cadamuro/test_submit_to_tier3/HiggsTauTauOutput_Data_SingleElectron_-1Events_0Skipped_1437412814.56





