/*************************************************************
                                                    May 2018

  Wrapper for several modules. See the readme (to be updated)

	Copyright Frederik Schaff

 *************************************************************/



#include "tools/CreateDir.h" //to create dirs

/*----------------------------*/

// Forward, because ABMAT is not yet adjusted.
#ifdef MODULE_ABMAT
  #define ABMAT_USE_ANALYSIS
#endif




#include "Advanced_LSD.cpp" //some general helpers for the backends


#define GET_VAR(c,lab2) AdvLSD_FakeVar(c,lab2)
#define GET_VAR_LABEL(c,lab2) AdvLSD_FakeVar_Label(c,lab2).c_str()

#ifdef MODULE_ABMAT
  #include "ABMAT/ABMAT_head.h"  //load the Analysis Toolkit
#endif

