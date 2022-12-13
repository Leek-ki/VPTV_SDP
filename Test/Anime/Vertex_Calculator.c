/*********************************************************************
	Rhapsody in C	: 9.0.1 
	Login		: AJOU
	Component	: Test 
	Configuration 	: Anime
	Model Element	: Vertex_Calculator
//!	Generated Date	: Wed, 14, Dec 2022  
	File Path	: Test\Anime\Vertex_Calculator.c
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
#include <string.h>
/*#[ ignore */
#define Default_Vertex_Calculator_Init_SERIALIZE OM_NO_OP

#define Default_Vertex_Calculator_Calculate_CenterOfRotate_SERIALIZE OM_NO_OP

#define Default_Vertex_Calculator_Calcultate_Vertex_SERIALIZE OM_NO_OP

#define Default_Vertex_Calculator_Write_CSV_SERIALIZE OM_NO_OP

#define Default_Vertex_Calculator_displayVertex_SERIALIZE OM_NO_OP

#define OMAnim_Default_Vertex_Calculator_setD_R_int_UNSERIALIZE_ARGS OP_UNSER(ARC_destructiveString2X_int,p_D_R)

#define OMAnim_Default_Vertex_Calculator_setD_R_int_SERIALIZE_RET_VAL

#define OMAnim_Default_setL101_float_UNSERIALIZE_ARGS OP_UNSER(ARC_destructiveString2X_float,p_L101)

#define OMAnim_Default_setL101_float_SERIALIZE_RET_VAL

#define OMAnim_Default_setW101_float_UNSERIALIZE_ARGS OP_UNSER(ARC_destructiveString2X_float,p_W101)

#define OMAnim_Default_setW101_float_SERIALIZE_RET_VAL

#define OMAnim_Default_Vertex_Calculator_setCount_int_UNSERIALIZE_ARGS OP_UNSER(ARC_destructiveString2X_int,p_count)

#define OMAnim_Default_Vertex_Calculator_setCount_int_SERIALIZE_RET_VAL

#define OMAnim_Default_Vertex_Calculator_setPinion_float_UNSERIALIZE_ARGS OP_UNSER(ARC_destructiveString2X_float,p_pinion)

#define OMAnim_Default_Vertex_Calculator_setPinion_float_SERIALIZE_RET_VAL

#define OMAnim_Default_setRatio_float_UNSERIALIZE_ARGS OP_UNSER(ARC_destructiveString2X_float,p_ratio)

#define OMAnim_Default_setRatio_float_SERIALIZE_RET_VAL

#define OMAnim_Default_Vertex_Calculator_setSpeed_float_UNSERIALIZE_ARGS OP_UNSER(ARC_destructiveString2X_float,p_speed)

#define OMAnim_Default_Vertex_Calculator_setSpeed_float_SERIALIZE_RET_VAL

#define Vertex_Calculator_REGISTER_OPER_STMT \
     REGISTER_OPERATION(Default_Vertex_Calculator_setD_R_int, "Vertex_Calculator_setD_R", FALSE, "Vertex_Calculator_setD_R(int)", 1) \
     REGISTER_OPERATION(Default_setL101_float, "setL101", FALSE, "setL101(float)", 1) \
     REGISTER_OPERATION(Default_setW101_float, "setW101", FALSE, "setW101(float)", 1) \
     REGISTER_OPERATION(Default_Vertex_Calculator_setCount_int, "Vertex_Calculator_setCount", FALSE, "Vertex_Calculator_setCount(int)", 1) \
     REGISTER_OPERATION(Default_Vertex_Calculator_setPinion_float, "Vertex_Calculator_setPinion", FALSE, "Vertex_Calculator_setPinion(float)", 1) \
     REGISTER_OPERATION(Default_setRatio_float, "setRatio", FALSE, "setRatio(float)", 1) \
     REGISTER_OPERATION(Default_Vertex_Calculator_setSpeed_float, "Vertex_Calculator_setSpeed", FALSE, "Vertex_Calculator_setSpeed(float)", 1)
/*#]*/

/*## package Default */

/*## class Vertex_Calculator */
/*## auto_generated */
static void initStatechart(Vertex_Calculator* const me);

#ifdef _OMINSTRUMENT
static void serializeAttributes(const void * const void_me, ARCSAttributes * arcsAttributes);

/*## statechart_method */
static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void rootState_entDef(void * const void_me);

/*## statechart_method */
static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void Drawing_serializeStates(const Vertex_Calculator* const me, ARCSState * arcsState);

/*## statechart_method */
static void Display_serializeStates(const Vertex_Calculator* const me, ARCSState * arcsState);

/*## statechart_method */
static void Active_serializeStates(const Vertex_Calculator* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Vertex_Calculator* const me);

static const ARCSerCVtbl Default_Vertex_Calculator_instrumentVtbl = {
    serializeAttributes,
    NULL
};
/*#]*/

#ifdef _OMINSTRUMENT
OM_INSTRUMENT_OBJECT_TYPE(Vertex_Calculator, Default, Default, FALSE, &Default_Vertex_Calculator_instrumentVtbl)

IMPLEMENT_OPERATION_CLASS(Default_Vertex_Calculator_setD_R_int, Vertex_Calculator, Vertex_Calculator_setD_R(realInst, me->p_D_R), NO_OP())

IMPLEMENT_OPERATION_CLASS(Default_setL101_float, Vertex_Calculator, setL101(realInst, me->p_L101), NO_OP())

IMPLEMENT_OPERATION_CLASS(Default_setW101_float, Vertex_Calculator, setW101(realInst, me->p_W101), NO_OP())

IMPLEMENT_OPERATION_CLASS(Default_Vertex_Calculator_setCount_int, Vertex_Calculator, Vertex_Calculator_setCount(realInst, me->p_count), NO_OP())

IMPLEMENT_OPERATION_CLASS(Default_Vertex_Calculator_setPinion_float, Vertex_Calculator, Vertex_Calculator_setPinion(realInst, me->p_pinion), NO_OP())

IMPLEMENT_OPERATION_CLASS(Default_setRatio_float, Vertex_Calculator, setRatio(realInst, me->p_ratio), NO_OP())

IMPLEMENT_OPERATION_CLASS(Default_Vertex_Calculator_setSpeed_float, Vertex_Calculator, Vertex_Calculator_setSpeed(realInst, me->p_speed), NO_OP())

IMPLEMENT_REGISTER_OPERATION_CLASSES(Vertex_Calculator)
#endif /* _OMINSTRUMENT */

/*## operation Calculate_CenterOfRotate() */
static void Calculate_CenterOfRotate(Vertex_Calculator* const me);

/*## operation Calcultate_Vertex() */
static void Calcultate_Vertex(Vertex_Calculator* const me);

/*## operation Calculate_CenterOfRotate() */
static void Calculate_CenterOfRotate(Vertex_Calculator* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Vertex_Calculator, Calculate_CenterOfRotate, Calculate_CenterOfRotate(), 0, Default_Vertex_Calculator_Calculate_CenterOfRotate_SERIALIZE);
    {
        /*#[ operation Calculate_CenterOfRotate() */
        float C = (me->pinion)/(me->ratio);
        float TAC = -1 * C * 3.14159265358979 /((float)180.0); // radian
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
}

/*## operation Calcultate_Vertex() */
static void Calcultate_Vertex(Vertex_Calculator* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Vertex_Calculator, Calcultate_Vertex, Calcultate_Vertex(), 0, Default_Vertex_Calculator_Calcultate_Vertex_SERIALIZE);
    {
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
    NOTIFY_OPERATION(me, &me, NULL, Vertex_Calculator, Vertex_Calculator_Write_CSV, Vertex_Calculator_Write_CSV(), 0, Default_Vertex_Calculator_Write_CSV_SERIALIZE);
    {
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
}

static void initStatechart(Vertex_Calculator* const me) {
    me->rootState_subState = Vertex_Calculator_RiCNonState;
    me->rootState_active = Vertex_Calculator_RiCNonState;
}

void Vertex_Calculator_Cleanup(Vertex_Calculator* const me) {
    NOTIFY_DESTRUCTOR(me, &me, Vertex_Calculator, ~Vertex_Calculator);
    RiCReactive_cleanup(&(me->ric_reactive));
}

/*## operation displayVertex() */
void Vertex_Calculator_displayVertex(Vertex_Calculator* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Vertex_Calculator, Vertex_Calculator_displayVertex, Vertex_Calculator_displayVertex(), 0, Default_Vertex_Calculator_displayVertex_SERIALIZE);
    {
        /*#[ operation displayVertex() */
        int i;
        
        printf("        x         y         x         y         x         y         x         y  \n");
        for (i = 0; i < (me->count)*8; i += 8) {
            printf("%2d %9.2f,%9.2f,%9.2f,%9.2f,%9.2f,%9.2f,%9.2f,%9.2f\n",(i+8)/8, (me->vertex)[i], (me->vertex)[i + 1], (me->vertex)[i + 2], (me->vertex)[i + 3], (me->vertex)[i + 4], (me->vertex)[i + 5], (me->vertex)[i + 6], (me->vertex)[i + 7]);
        }
        
    
        /*#]*/
    }
}

/*## operation Init() */
void Vertex_Calculator_Init(Vertex_Calculator* const me, RiCTask * p_task) {
    /* Virtual tables Initialization */
    static const RiCReactive_Vtbl Vertex_Calculator_reactiveVtbl = {
        rootState_dispatchEvent,
        rootState_entDef,
        ROOT_STATE_SERIALIZE_STATES(rootState_serializeStates),
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
    NOTIFY_REACTIVE_CONSTRUCTOR_WITH_OPER_INVOKE(me, &me, NULL, Vertex_Calculator, Vertex_Calculator_Init, Vertex_Calculator_Init(), 0, Default_Vertex_Calculator_Init_SERIALIZE);
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
    NOTIFY_END_CONSTRUCTOR(me);
}

RiCBoolean Vertex_Calculator_startBehavior(Vertex_Calculator* const me) {
    RiCBoolean done = RiCFALSE;
    done = RiCReactive_startBehavior(&(me->ric_reactive));
    return done;
}

void Vertex_Calculator_setD_R(Vertex_Calculator* const me, int p_D_R) {
    me->D_R = p_D_R;
    NOTIFY_SET_OPERATION(me, Vertex_Calculator);
}

void Vertex_Calculator_setCount(Vertex_Calculator* const me, int p_count) {
    me->count = p_count;
    NOTIFY_SET_OPERATION(me, Vertex_Calculator);
}

void Vertex_Calculator_setPinion(Vertex_Calculator* const me, float p_pinion) {
    me->pinion = p_pinion;
    NOTIFY_SET_OPERATION(me, Vertex_Calculator);
}

void Vertex_Calculator_setSpeed(Vertex_Calculator* const me, float p_speed) {
    me->speed = p_speed;
    NOTIFY_SET_OPERATION(me, Vertex_Calculator);
}

void setRatio(Vertex_Calculator* const me, float p_ratio) {
    me->ratio = p_ratio;
    NOTIFY_SET_OPERATION(me, Vertex_Calculator);
}

void setL101(Vertex_Calculator* const me, float p_L101) {
    me->L101 = p_L101;
    NOTIFY_SET_OPERATION(me, Vertex_Calculator);
}

void setW101(Vertex_Calculator* const me, float p_W101) {
    me->W101 = p_W101;
    NOTIFY_SET_OPERATION(me, Vertex_Calculator);
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

#ifdef _OMINSTRUMENT
static void serializeAttributes(const void * const void_me, ARCSAttributes * arcsAttributes) {
    
    const Vertex_Calculator * const me = (const Vertex_Calculator *)void_me;
    ARCSA_addAttribute_c(arcsAttributes, "pinion", ARC_float2String(me->pinion));
    ARCSA_addAttribute_c(arcsAttributes, "L101", ARC_float2String(me->L101));
    ARCSA_addAttribute_c(arcsAttributes, "W101", ARC_float2String(me->W101));
    ARCSA_addAttribute_c(arcsAttributes, "ratio", ARC_float2String(me->ratio));
    ARCSA_addAttribute_c(arcsAttributes, "speed", ARC_float2String(me->speed));
    ARCSA_addAttribute_c(arcsAttributes, "D_R", ARC_int2String(me->D_R));
    ARCSA_addAttribute_c(arcsAttributes, "count", ARC_int2String(me->count));
    ARCSA_addAttribute_c(arcsAttributes, "Center_Of_Rotate", ARC_float2String(me->Center_Of_Rotate));
    ARCSA_addAttribute_c(arcsAttributes, "vertex", ARC_floatArray2String(3000, me->vertex, sizeof(float), &ARC_float2String));
}

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState) {
    
    const Vertex_Calculator * const me = (const Vertex_Calculator *)void_me;
    ARCSS_addState_OMH(arcsState, "ROOT");
    switch (me->rootState_subState) {
        case Vertex_Calculator_Active:
        {
            Active_serializeStates(me, arcsState);
        }
        break;
        case Vertex_Calculator_Display:
        {
            Display_serializeStates(me, arcsState);
        }
        break;
        case Vertex_Calculator_Drawing:
        {
            Drawing_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void rootState_entDef(void * const void_me) {
    
    Vertex_Calculator * const me = (Vertex_Calculator *)void_me;
    {
        NOTIFY_STATE_ENTERED(me, Vertex_Calculator, "ROOT");
        NOTIFY_TRANSITION_STARTED(me, Vertex_Calculator, "0");
        {
            /*#[ transition 0 */
            
            printf("Started\n");
            /*#]*/
        }
        NOTIFY_STATE_ENTERED(me, Vertex_Calculator, "ROOT.Active");
        me->rootState_subState = Vertex_Calculator_Active;
        me->rootState_active = Vertex_Calculator_Active;
        RiCTask_schedTm(me->ric_reactive.myTask, 200, Vertex_Calculator_Timeout_Active_id, &(me->ric_reactive), "ROOT.Active");
        NOTIFY_TRANSITION_TERMINATED(me, Vertex_Calculator, "0");
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
                            NOTIFY_TRANSITION_STARTED(me, Vertex_Calculator, "1");
                            RiCTask_unschedTm(me->ric_reactive.myTask, Vertex_Calculator_Timeout_Active_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Vertex_Calculator, "ROOT.Active");
                            {
                                /*#[ transition 1 */
                                
                                printf("Calculate Center of Rotate\n");
                                Calculate_CenterOfRotate(me);
                                printf("Calculate Vertex\n");
                                Calcultate_Vertex(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Vertex_Calculator, "ROOT.Display");
                            me->rootState_subState = Vertex_Calculator_Display;
                            me->rootState_active = Vertex_Calculator_Display;
                            RiCTask_schedTm(me->ric_reactive.myTask, 100, Vertex_Calculator_Timeout_Display_id, &(me->ric_reactive), "ROOT.Display");
                            NOTIFY_TRANSITION_TERMINATED(me, Vertex_Calculator, "1");
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
                            NOTIFY_TRANSITION_STARTED(me, Vertex_Calculator, "2");
                            RiCTask_unschedTm(me->ric_reactive.myTask, Vertex_Calculator_Timeout_Display_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Vertex_Calculator, "ROOT.Display");
                            {
                                /*#[ transition 2 */
                                
                                Vertex_Calculator_displayVertex(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Vertex_Calculator, "ROOT.Drawing");
                            me->rootState_subState = Vertex_Calculator_Drawing;
                            me->rootState_active = Vertex_Calculator_Drawing;
                            RiCTask_schedTm(me->ric_reactive.myTask, 100, Vertex_Calculator_Timeout_Drawing_id, &(me->ric_reactive), "ROOT.Drawing");
                            NOTIFY_TRANSITION_TERMINATED(me, Vertex_Calculator, "2");
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
                            NOTIFY_TRANSITION_STARTED(me, Vertex_Calculator, "3");
                            RiCTask_unschedTm(me->ric_reactive.myTask, Vertex_Calculator_Timeout_Drawing_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Vertex_Calculator, "ROOT.Drawing");
                            {
                                /*#[ transition 3 */
                                
                                printf("Write CSV\n");
                                Vertex_Calculator_Write_CSV(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Vertex_Calculator, "ROOT.Active");
                            me->rootState_subState = Vertex_Calculator_Active;
                            me->rootState_active = Vertex_Calculator_Active;
                            RiCTask_schedTm(me->ric_reactive.myTask, 200, Vertex_Calculator_Timeout_Active_id, &(me->ric_reactive), "ROOT.Active");
                            NOTIFY_TRANSITION_TERMINATED(me, Vertex_Calculator, "3");
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

#ifdef _OMINSTRUMENT
static void Drawing_serializeStates(const Vertex_Calculator* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Drawing");
}

static void Display_serializeStates(const Vertex_Calculator* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Display");
}

static void Active_serializeStates(const Vertex_Calculator* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active");
}
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(Vertex_Calculator* const me) {
    free(me);
}
/*#]*/

/*********************************************************************
	File Path	: Test\Anime\Vertex_Calculator.c
*********************************************************************/
