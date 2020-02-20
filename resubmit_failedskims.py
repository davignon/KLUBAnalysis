#!/usr/bin/env python

import os,sys
import glob
import ROOT

def ResubmitFailedSkims():
    
    location_skims = "/data_CMS/cms/davignon/HHLegacy_2018_SKIMS_19_02_20/SKIMS_19Feb2020/"
    location_scripts = "SKIMS_19Feb2020"

    for dir in glob.glob(location_skims+"/SKIM*"):
        filename = dir+"/badfiles.txt"
        if os.path.exists(filename):
            file1 = open(filename, 'r') 
            Lines = file1.readlines()
            for line in Lines:
                line1 = line.strip()
                #print (line1)
                app = line1.split("output_")[1]
                app = app.split(".root")[0]
                #print (app)

                tmp_path = os.path.basename(os.path.normpath(dir))
                tmp_path = tmp_path.replace("SKIM_","")
                tmp_path = tmp_path.replace("Muon","Muon__Run")
                tmp_path = tmp_path.replace("Tau","Tau__Run")
                tmp_path = tmp_path.replace("Electron","Tau__Run")
                job_to_resubmit = location_scripts + "/*"+tmp_path+"*/skimJob_"+app+".sh"
                #print job_to_resubmit
                job_path = glob.glob(job_to_resubmit)
                if job_path:
                    print ("/opt/exp_soft/cms/t3/t3submit -short "+job_path[0])
