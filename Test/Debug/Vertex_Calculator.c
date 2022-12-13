/*********************************************************************
	Rhapsody in C	: 9.0.1 
	Login		: AJOU
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Vertex_Calculator
//!	Generated Date	: Wed, 14, Dec 2022  
	File Path	: Test\Debug\Vertex_Calculator.c
*********************************************************************/

/*## auto_generated */
#include "Vertex_Calculator.h"
/*## auto_generated */
#include <stdio.h>
/*## auto_generated */
#include <math.h>
/*## auto_generated */
#include <stdlib.h>
/*## auto_generated */
#include <limits.h>
/*## auto_generated */
#include <oxf\RiCTask.h>
/*## package Default */

/*## class Vertex_Calculator */
/*## auto_generated */
static void initStatechart(Vertex_Calculator* const me);

/*## statechart_method */
static void rootState_entDef(void * const void_me);

/*## statechart_method */
static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id);

/*#[ ignore */
static void FreeInstance(Vertex_Calculator* const me);
/*#]*/

/*## operation Calculate_CenterOfRotate() */
static void Calculate_CenterOfRotate(Vertex_Calculator* const me);

/*## operation Calcultate_Vertex() */
static void Calcultate_Vertex(Vertex_Calculator* const me);

/*## operation Calculate_CenterOfRotate() */
static void Calculate_CenterOfRotate(Vertex_Calculator* const me) {
    /*#[ operation Calculate_CenterOfRotate() */
    float C = (me->pinion)/(me->ratio);
    float TAC = -1*C*(me->PI)/((float)180.0); // radian
    float M_C = me->L101/tanf(TAC);
    float L_C = M_C+(me->W101)/2;
    float R_C = M_C-(me->W101)/2;
    float TAL = atan2f(me->L101,-1*L_C);
    float TAR = atan2f(me->L101,-1*R_C);
    float Radius_of_Rotate_L = (me->L101)/tanf(TAL);
    float Radius_of_Rotate_R = (me->L101)/tanf(TAR);
    
    me->Center_Of_Rotate = (Radius_of_Rotate_L + Radius_of_Rotate_R)/2;
    
    
    /*#]*/
}

/*## operation Calcultate_Vertex() */
static void Calcultate_Vertex(Vertex_Calculator* const me) {
    /*#[ operation Calcultate_Vertex() */
    float Rotate, FLx, FLy, FRx, FRy, RLx, RLy, RRx, RRy, time;
    int i,gear;
    
    FLx = -(me->W101)/2;
    FLy = me->L101;
    FRx = (me->W101)/2;
    FRy = me->L101;
    RLx = -(me->W101)/2;
    RLy = 0;
    RRx = (me->W101)/2;
    RRy = 0;
    
    time = 0;
    
    if(me->D_R == 0)
    {
    	gear = -1;
    }
    else
    	gear = 1;
    
    for (i = 0; i < (me->count)*8; i += 8) {
        Rotate = -1 * gear * time * me->speed / me->Center_Of_Rotate;
        (me->vertex)[i] = (float)(FLx * cos(Rotate) - FLy * sin(Rotate) + me->Center_Of_Rotate * (1-cos(Rotate)));
        (me->vertex)[i + 1] = (float)(FLx * sin(Rotate) + FLy * cos(Rotate) - me->Center_Of_Rotate * sin(Rotate));
        (me->vertex)[i + 2] = (float)(FRx * cos(Rotate) - FRy * sin(Rotate) + me->Center_Of_Rotate * (1-cos(Rotate)));
        (me->vertex)[i + 3] = (float)(FRx * sin(Rotate) + FRy * cos(Rotate) - me->Center_Of_Rotate * sin(Rotate));
        (me->vertex)[i + 4] = (float)(RLx * cos(Rotate) - RLy * sin(Rotate) + me->Center_Of_Rotate * (1-cos(Rotate)));
        (me->vertex)[i + 5] = (float)(RLx * sin(Rotate) + RLy * cos(Rotate) - me->Center_Of_Rotate * sin(Rotate));
        (me->vertex)[i + 6] = (float)(RRx * cos(Rotate) - RRy * sin(Rotate) + me->Center_Of_Rotate * (1-cos(Rotate)));
        (me->vertex)[i + 7] = (float)(RRx * sin(Rotate) + RRy * cos(Rotate) - me->Center_Of_Rotate * sin(Rotate));
    
        time = time + 0.1;
    }
    
    
    /*#]*/
}

Vertex_Calculator * Vertex_Calculator_Create(RiCTask * p_task) {
    Vertex_Calculator* me = (Vertex_Calculator *) malloc(sizeof(Vertex_Calculator));
    if(me!=NULL)
        {
            Vertex_Calculator_Init(me, p_task);
        }
    DYNAMICALLY_ALLOCATED(me);
    return me;
}

/*## operation Write_CSV() */
void Vertex_Calculator_Write_CSV(Vertex_Calculator* const me) {
    /*#[ operation Write_CSV() */
    FILE *fp;
    int i;
    
    fp = fopen("vertex.csv", "w");
    fprintf(fp, ",x1,y1,x2,y2,x3,y3,x4,y4\n");
    for (i = 0; i < me->count*8; i += 8) {
        fprintf(fp, "%d,%f,%f,%f,%f,%f,%f,%f,%f\n",(i+8)/8, (me->vertex)[i], (me->vertex)[i + 1], (me->vertex)[i + 2], (me->vertex)[i + 3], (me->vertex)[i + 4], (me->vertex)[i + 5], (me->vertex)[i + 6], (me->vertex)[i + 7]);
    }
    fclose(fp);
    
    
    /*#]*/
}

static void initStatechart(Vertex_Calculator* const me) {
    me->rootState_subState = Vertex_Calculator_RiCNonState;
    me->rootState_active = Vertex_Calculator_RiCNonState;
}

void Vertex_Calculator_Cleanup(Vertex_Calculator* const me) {
    RiCReactive_cleanup(&(me->ric_reactive));
}

/*## operation displayVertex() */
void Vertex_Calculator_displayVertex(Vertex_Calculator* const me) {
    /*#[ operation displayVertex() */
    int i;
    
    printf("        x         y         x         y         x         y         x         y  \n");
    for (i = 0; i < (me->count)*8; i += 8) {
        printf("%2d %9.2f,%9.2f,%9.2f,%9.2f,%9.2f,%9.2f,%9.2f,%9.2f\n",(i+8)/8, (me->vertex)[i], (me->vertex)[i + 1], (me->vertex)[i + 2], (me->vertex)[i + 3], (me->vertex)[i + 4], (me->vertex)[i + 5], (me->vertex)[i + 6], (me->vertex)[i + 7]);
    }
    
    
    /*#]*/
}

/*## operation Init() */
void Vertex_Calculator_Init(Vertex_Calculator* const me, RiCTask * p_task) {
    /* Virtual tables Initialization */
    static const RiCReactive_Vtbl Vertex_Calculator_reactiveVtbl = {
        rootState_dispatchEvent,
        rootState_entDef,
        NULL,
        (RiCObjectDestroyMethod) Vertex_Calculator_Destroy,
        NULL,
        NULL,
        NULL,
        (RiCObjectCleanupMethod) Vertex_Calculator_Cleanup,
        (RiCObjectFreeMethod) FreeInstance
    };
    me->L101 = 2.7347;
    me->W101 = 1.5922;
    me->pinion = 0;
    me->ratio = 12;
    me->speed = 5;
    RiCReactive_init(&(me->ric_reactive), (void*)me, p_task, &Vertex_Calculator_reactiveVtbl);
    RiCReactive_setActive(&(me->ric_reactive), RiCFALSE);
    initStatechart(me);
    {
        /*#[ operation Init() */
        me->D_R = 0;
        me->pinion = 0;
        me->speed = 0;
        me->count = 0;
    
        /*#]*/
    }
}

RiCBoolean Vertex_Calculator_startBehavior(Vertex_Calculator* const me) {
    RiCBoolean done = RiCFALSE;
    done = RiCReactive_startBehavior(&(me->ric_reactive));
    return done;
}

void Vertex_Calculator_Destroy(Vertex_Calculator* const me) {
    if(me!=NULL)
        {
            Vertex_Calculator_Cleanup(me);
        }
    free(me);
}

int Vertex_Calculator_rootState_IN(const Vertex_Calculator* const me) {
    return 1;
}

int Vertex_Calculator_Drawing_IN(const Vertex_Calculator* const me) {
    return me->rootState_subState == Vertex_Calculator_Drawing;
}

int Vertex_Calculator_Display_IN(const Vertex_Calculator* const me) {
    return me->rootState_subState == Vertex_Calculator_Display;
}

int Vertex_Calculator_Active_IN(const Vertex_Calculator* const me) {
    return me->rootState_subState == Vertex_Calculator_Active;
}

static void rootState_entDef(void * const void_me) {
    
    Vertex_Calculator * const me = (Vertex_Calculator *)void_me;
    {
        {
            /*#[ transition 0 */
            
            printf("Started\n");
            /*#]*/
        }
        me->rootState_subState = Vertex_Calculator_Active;
        me->rootState_active = Vertex_Calculator_Active;
        RiCTask_schedTm(me->ric_reactive.myTask, 200, Vertex_Calculator_Timeout_Active_id, &(me->ric_reactive), NULL);
    }
}

static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id) {
    
    Vertex_Calculator * const me = (Vertex_Calculator *)void_me;
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->rootState_active) {
        /* State Active */
        case Vertex_Calculator_Active:
        {
            if(id == Timeout_id)
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Vertex_Calculator_Timeout_Active_id)
                        {
                            RiCTask_unschedTm(me->ric_reactive.myTask, Vertex_Calculator_Timeout_Active_id, &(me->ric_reactive));
                            {
                                /*#[ transition 1 */
                                
                                printf("Calculate Center of Rotate\n");
                                Calculate_CenterOfRotate(me);
                                printf("Calculate Vertex\n");
                                Calcultate_Vertex(me);
                                /*#]*/
                            }
                            me->rootState_subState = Vertex_Calculator_Display;
                            me->rootState_active = Vertex_Calculator_Display;
                            RiCTask_schedTm(me->ric_reactive.myTask, 100, Vertex_Calculator_Timeout_Display_id, &(me->ric_reactive), NULL);
                            res = eventConsumed;
                        }
                }
        }
        break;
        /* State Display */
        case Vertex_Calculator_Display:
        {
            if(id == Timeout_id)
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Vertex_Calculator_Timeout_Display_id)
                        {
                            RiCTask_unschedTm(me->ric_reactive.myTask, Vertex_Calculator_Timeout_Display_id, &(me->ric_reactive));
                            {
                                /*#[ transition 2 */
                                
                                Vertex_Calculator_displayVertex(me);
                                /*#]*/
                            }
                            me->rootState_subState = Vertex_Calculator_Drawing;
                            me->rootState_active = Vertex_Calculator_Drawing;
                            RiCTask_schedTm(me->ric_reactive.myTask, 100, Vertex_Calculator_Timeout_Drawing_id, &(me->ric_reactive), NULL);
                            res = eventConsumed;
                        }
                }
        }
        break;
        /* State Drawing */
        case Vertex_Calculator_Drawing:
        {
            if(id == Timeout_id)
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Vertex_Calculator_Timeout_Drawing_id)
                        {
                            RiCTask_unschedTm(me->ric_reactive.myTask, Vertex_Calculator_Timeout_Drawing_id, &(me->ric_reactive));
                            {
                                /*#[ transition 3 */
                                
                                printf("Write CSV\n");
                                Vertex_Calculator_Write_CSV(me);
                                /*#]*/
                            }
                            me->rootState_subState = Vertex_Calculator_Active;
                            me->rootState_active = Vertex_Calculator_Active;
                            RiCTask_schedTm(me->ric_reactive.myTask, 200, Vertex_Calculator_Timeout_Active_id, &(me->ric_reactive), NULL);
                            res = eventConsumed;
                        }
                }
        }
        break;
        default:
            break;
    }
    return res;
}

/*#[ ignore */
static void FreeInstance(Vertex_Calculator* const me) {
    free(me);
}
/*#]*/

/*********************************************************************
	File Path	: Test\Debug\Vertex_Calculator.c
*********************************************************************/
