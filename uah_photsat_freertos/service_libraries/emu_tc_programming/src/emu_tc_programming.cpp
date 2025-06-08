#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>

//TODO 10 Complete FT_UAH_PHOTSAT_SERV_129_0010  done
#define FT_UAH_PHOTSAT_SERV_129_0010

//#define FT_UAH_PHOTSAT_SERV_129_FDIR_0020

#define FT_0010_TIME_step0 (OBT_AFTER_POWER_ON + 5)
#define FT_0010_TIME_step1 (OBT_AFTER_POWER_ON + 8)



#ifdef FT_UAH_PHOTSAT_SERV_129_0010
EmuGSS_TCProgram129_2 prog_FT_0010_step0(FT_0010_TIME_step0,
    "FT_UAH_PHOTSAT_FDIR_0010 step 0, Set PID Params to 0.9, 0.07, 0.04",0.9, 0.07, 0.04);

EmuGSS_TCProgram129_1 prog_FT_0010_step1(FT_0010_TIME_step1,
	"FT_UAH_PHOTSAT_FDIR_0010 step 1, Observation ThetaPitch = 500 mins, ThetaYaw = 400 mins, take 6 images",500,400,6);


#endif


//TODO 11 Complete FT_UAH_PHOTSAT_SERV_129_FDIR_0020 done

#ifdef FT_UAH_PHOTSAT_SERV_129_FDIR_0020

#define FT_0020_TIME_step0 (OBT_AFTER_POWER_ON + 5)
#define FT_0020_TIME_step1 (OBT_AFTER_POWER_ON + 10)
#define FT_0020_TIME_step2 (OBT_AFTER_POWER_ON + 15)
#define FT_0020_TIME_step3 (OBT_AFTER_POWER_ON + 20)
#define FT_0020_TIME_step4 (OBT_AFTER_POWER_ON + 25)
#define FT_0020_TIME_step5 (OBT_AFTER_POWER_ON + 30)
#define FT_0020_TIME_step6 (OBT_AFTER_POWER_ON + 35)
#define FT_0020_TIME_step7 (OBT_AFTER_POWER_ON + 40)
#define FT_0020_TIME_step8 (OBT_AFTER_POWER_ON + 60)

EmuGSS_TCProgram12_5_Value_UINT8 prog_FT_0020_step_0(FT_0020_TIME_step0,
		"FT_UAH_PHOTSAT_Monitoring_0020 step 0, Config PMONID 0 for monitoring PID 13",0, 13, 1, 1, 0xFF, 0, 0x4003);


EmuGSS_TCProgram12_5_Value_UINT8 prog_FT_0020_step_1(FT_0020_TIME_step1,
		"FT_UAH_PHOTSAT_Monitoring_0020 step 1, Config PMONID 1 for monitoring PID 14",1, 14, 1, 1, 0xFF,  0, 0x4003);


EmuGSS_TCProgram12_1 prog_FT_0020_step2(FT_0020_TIME_step2,
		"FT_UAH_PHOTSAT_Event_Action_0020 step 2, Enable PMONID 0 " , 0);


EmuGSS_TCProgram12_1 prog_FT_0020_step3(FT_0020_TIME_step3,
		"FT_UAH_PHOTSAT_Event_Action_0020 step 3, Enable PMONID 1 " , 1);


EmuGSS_TCProgram19_1_Action_129_3 prog_FT_0020_step_4(FT_0020_TIME_step4,
		"FT_UAH_PHOTSAT_Event_Action_0020 step 4, 0x4003 Action: Attitude Control Reset",0x4003);


EmuGSS_TCProgram19_4 prog_FT_0020_step5( FT_0020_TIME_step5,"FT_UAH_PHOTSAT_SERV_19_0020 Step 5, Enable Event Action", 0x4003);



EmuGSS_TCProgram129_2 prog_FT_0020_TIME_step_6(FT_0020_TIME_step6,
"FT_UAH_PHOTSAT_SERV_129_0020 step 6, Set Kp = Ki = Kd = 0.5" ,0.5,0.5,0.5);

EmuGSS_TCProgram129_1 prog_FT_0020_TIME_step_7(FT_0020_TIME_step7,
"FT_UAH_PHOTSAT_SERV_129_0010 step 2, Set Theta Pitch, Set Theta Yaw and Number of Images"
		,15*50,15*50,5);


EmuGSS_TCProgram128_1 prog_FT_0020_TIME_step_8(FT_0020_TIME_step8, "END FUNCTIONAL TEST");





#endif
