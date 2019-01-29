//#define EIGENLIB			// uncomment to use Eigen linear algebra library
//#define NO_POINTER_INIT	// uncomment to disable pointer checking

#include "fun_head_fast.h"

#define MODULE_ABMAT

  //ABMAT
// #define ABMAT_ANALYSIS_CFG_PATH "Config/ABMAT_Analysis.cfg"
#define ABMAT_ANALYSIS_CFG_PATH "Config/ABMAT_NoAnalysis.cfg"
#define ABMAT_INTERVALS_CFG_PATH "Config/ABMAT_Intervals.cfg"

#include "Advanced_LSD/Advanced_LSD.h" //include modules



// do not add Equations in this area

MODELBEGIN

#include "Advanced_LSD/fun_Advanced_LSD.h" //Equation files

// insert your equations here, between the MODELBEGIN and MODELEND words

EQUATION("macro_1")
/* A test macro variable. It will also create new micro variables if they are less then 10*/
for (i = 0; i < 10; i++){
	if (COUNT("micro")<10){
		ADDOBJ("micro");
	}
}

//and randomly a new one, too.
if (RND < .8)
	ADDOBJ("micro");
RESULT(RND)

EQUATION("micro_1")
if (RND>.95)
	DELETE(p);
RESULT(RND)










MODELEND

// do not add Equations in this area

void close_sim( void )
{
	// close simulation special commands go here
}
