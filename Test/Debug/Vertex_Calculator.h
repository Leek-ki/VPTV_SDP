/*********************************************************************
	Rhapsody in C	: 9.0.1 
	Login		: AJOU
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Vertex_Calculator
//!	Generated Date	: Wed, 14, Dec 2022  
	File Path	: Test\Debug\Vertex_Calculator.h
*********************************************************************/

#ifndef Vertex_Calculator_H
#define Vertex_Calculator_H

/*## auto_generated */
#include "Default.h"
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*## auto_generated */
#include <oxf\Ric.h>
/*#[ ignore */
#define Vertex_Calculator_Timeout_Active_id 3

#define Vertex_Calculator_Timeout_Display_id 2

#define Vertex_Calculator_Timeout_Drawing_id 1
/*#]*/

/*## package Default */

/*## class Vertex_Calculator */
typedef struct Vertex_Calculator Vertex_Calculator;
struct Vertex_Calculator {
    RiCReactive ric_reactive;
    float L101;		/*## attribute L101 */
    float pinion;		/*## attribute pinion */
    int D_R;		/*## attribute D_R */
    float W101;		/*## attribute W101 */
    float ratio;		/*## attribute ratio */
    float speed;		/*## attribute speed */
    int count;		/*## attribute count */
    float Center_Of_Rotate;		/*## attribute Center_Of_Rotate */
    const float PI;		/*## attribute PI */
    const float unit_time;		/*## attribute unit_time */
    float vertex[3000];		/*## attribute vertex */
    /*#[ ignore */
    int rootState_subState;
    int rootState_active;
    /*#]*/
};

/***    User implicit entries    ***/

/* Constructors and destructors:*/

/*## auto_generated */
Vertex_Calculator * Vertex_Calculator_Create(RiCTask * p_task);

/*## operation Write_CSV() */
void Vertex_Calculator_Write_CSV(Vertex_Calculator* const me);

/*## auto_generated */
RiCBoolean Vertex_Calculator_startBehavior(Vertex_Calculator* const me);

/*## auto_generated */
void Vertex_Calculator_Cleanup(Vertex_Calculator* const me);

/*## operation displayVertex() */
void Vertex_Calculator_displayVertex(Vertex_Calculator* const me);

/*## operation Init() */
void Vertex_Calculator_Init(Vertex_Calculator* const me, RiCTask * p_task);

/*## auto_generated */
void Vertex_Calculator_Destroy(Vertex_Calculator* const me);

/* rootState: */
/*## statechart_method */
int Vertex_Calculator_rootState_IN(const Vertex_Calculator* const me);

/* Drawing: */
/*## statechart_method */
int Vertex_Calculator_Drawing_IN(const Vertex_Calculator* const me);

/* Display: */
/*## statechart_method */
int Vertex_Calculator_Display_IN(const Vertex_Calculator* const me);

/* Active: */
/*## statechart_method */
int Vertex_Calculator_Active_IN(const Vertex_Calculator* const me);

/*#[ ignore */
enum Vertex_Calculator_Enum {
    Vertex_Calculator_RiCNonState = 0,
    Vertex_Calculator_Drawing = 1,
    Vertex_Calculator_Display = 2,
    Vertex_Calculator_Active = 3
};
/*#]*/

#endif
/*********************************************************************
	File Path	: Test\Debug\Vertex_Calculator.h
*********************************************************************/
