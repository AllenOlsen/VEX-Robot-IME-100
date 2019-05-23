/*
 * matlab1.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "matlab1".
 *
 * Model version              : 1.57
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C source code generated on : Thu May 23 16:14:32 2019
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_matlab1_h_
#define RTW_HEADER_matlab1_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef matlab1_COMMON_INCLUDES_
# define matlab1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_GamepadButton_Wrapper.h"
#include "MW_DCMotor_Wrapper.h"
#include "MW_GamepadAccel_Wrapper.h"
#endif                                 /* matlab1_COMMON_INCLUDES_ */

#include "matlab1_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<Root>/Gamepad Button1' */
typedef struct {
  real_T GamepadButton1;               /* '<Root>/Gamepad Button1' */
} B_GamepadButton1_matlab1_T;

/* Block states (default storage) for system '<Root>/Gamepad Button1' */
typedef struct {
  vex_GamepadButton_matlab1_T obj;     /* '<Root>/Gamepad Button1' */
  boolean_T objisempty;                /* '<Root>/Gamepad Button1' */
} DW_GamepadButton1_matlab1_T;

/* Block signals for system '<Root>/Gamepad Button3' */
typedef struct {
  real_T GamepadButton3;               /* '<Root>/Gamepad Button3' */
} B_GamepadButton3_matlab1_T;

/* Block states (default storage) for system '<Root>/Gamepad Button3' */
typedef struct {
  vex_GamepadButton_matlab1_T obj;     /* '<Root>/Gamepad Button3' */
  boolean_T objisempty;                /* '<Root>/Gamepad Button3' */
} DW_GamepadButton3_matlab1_T;

/* Block signals (default storage) */
typedef struct {
  B_GamepadButton1_matlab1_T GamepadButton6;/* '<Root>/Gamepad Button1' */
  B_GamepadButton3_matlab1_T GamepadButton5;/* '<Root>/Gamepad Button3' */
  B_GamepadButton3_matlab1_T GamepadButton3;/* '<Root>/Gamepad Button3' */
  B_GamepadButton1_matlab1_T GamepadButton1;/* '<Root>/Gamepad Button1' */
} B_matlab1_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  vex_DCMotor_matlab1_T obj;           /* '<Root>/Middle H Motor' */
  vex_DCMotor_matlab1_T obj_b;         /* '<Root>/DC Motor4' */
  vex_DCMotor_matlab1_T obj_d;         /* '<Root>/DC Motor2' */
  vex_DCMotor_matlab1_T obj_c;         /* '<Root>/Left Motor ' */
  vex_DCMotor_matlab1_T obj_o;         /* '<Root>/Right Motor' */
  vex_GamepadButton_matlab1_T obj_l;   /* '<Root>/Gamepad Button4' */
  vex_GamepadButton_matlab1_T obj_ds;  /* '<Root>/Gamepad Button2' */
  vex_GamepadButton_matlab1_T obj_bh;  /* '<Root>/Gamepad Button7' */
  vex_GamepadButton_matlab1_T obj_b0;  /* '<Root>/Gamepad Button8' */
  vex_GamepadButton_matlab1_T obj_cj;  /* '<Root>/Gamepad Joystick5' */
  vex_GamepadButton_matlab1_T obj_p;   /* '<Root>/Gamepad Joystick2' */
  boolean_T objisempty;                /* '<Root>/Middle H Motor' */
  boolean_T objisempty_b;              /* '<Root>/Gamepad Button4' */
  boolean_T objisempty_m;              /* '<Root>/DC Motor4' */
  boolean_T objisempty_f;              /* '<Root>/Gamepad Button2' */
  boolean_T objisempty_p;              /* '<Root>/DC Motor2' */
  boolean_T objisempty_h;              /* '<Root>/Gamepad Joystick5' */
  boolean_T objisempty_py;             /* '<Root>/Left Motor ' */
  boolean_T objisempty_pv;             /* '<Root>/Gamepad Joystick2' */
  boolean_T objisempty_n;              /* '<Root>/Right Motor' */
  boolean_T objisempty_bh;             /* '<Root>/Gamepad Button7' */
  boolean_T objisempty_hd;             /* '<Root>/Gamepad Button8' */
  DW_GamepadButton1_matlab1_T GamepadButton6;/* '<Root>/Gamepad Button1' */
  DW_GamepadButton3_matlab1_T GamepadButton5;/* '<Root>/Gamepad Button3' */
  DW_GamepadButton3_matlab1_T GamepadButton3;/* '<Root>/Gamepad Button3' */
  DW_GamepadButton1_matlab1_T GamepadButton1;/* '<Root>/Gamepad Button1' */
} DW_matlab1_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Merge1;                 /* '<Root>/Merge1' */
} ConstB_matlab1_T;

/* Parameters for system: '<Root>/If Action Subsystem4' */
struct P_IfActionSubsystem4_matlab1_T_ {
  real_T Out1_Y0;                      /* Expression: 127
                                        * Referenced by: '<S5>/Out1'
                                        */
};

/* Parameters (default storage) */
struct P_matlab1_T_ {
  real_T RightMotor_scaleFactor;       /* Expression: 1/13.5
                                        * Referenced by: '<Root>/Right Motor'
                                        */
  real_T LeftMotor_scaleFactor;        /* Expression: 1/13.5
                                        * Referenced by: '<Root>/Left Motor '
                                        */
  real_T DCMotor2_scaleFactor;         /* Expression: 1/13.5
                                        * Referenced by: '<Root>/DC Motor2'
                                        */
  real_T DCMotor4_scaleFactor;         /* Expression: 1/13.5
                                        * Referenced by: '<Root>/DC Motor4'
                                        */
  real_T MiddleHMotor_scaleFactor;     /* Expression: 1/13.5
                                        * Referenced by: '<Root>/Middle H Motor'
                                        */
  real_T Constant2_Value;              /* Expression: -128
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Constant1_Value;              /* Expression: 127
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Constant8_Value;              /* Expression: -128
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real_T Constant10_Value;             /* Expression: 127
                                        * Referenced by: '<Root>/Constant10'
                                        */
  real_T Constant7_Value;              /* Expression: -128
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T Constant3_Value;              /* Expression: 127
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Gain5_Gain;                   /* Expression: -1
                                        * Referenced by: '<Root>/Gain5'
                                        */
  P_IfActionSubsystem4_matlab1_T IfActionSubsystem10;/* '<Root>/If Action Subsystem10' */
  P_IfActionSubsystem4_matlab1_T IfActionSubsystem9;/* '<Root>/If Action Subsystem9' */
  P_IfActionSubsystem4_matlab1_T IfActionSubsystem7;/* '<Root>/If Action Subsystem7' */
  P_IfActionSubsystem4_matlab1_T IfActionSubsystem6;/* '<Root>/If Action Subsystem6' */
  P_IfActionSubsystem4_matlab1_T IfActionSubsystem1;/* '<Root>/If Action Subsystem1' */
  P_IfActionSubsystem4_matlab1_T IfActionSubsystem4;/* '<Root>/If Action Subsystem4' */
};

/* Real-time Model Data Structure */
struct tag_RTM_matlab1_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_matlab1_T matlab1_P;

/* Block signals (default storage) */
extern B_matlab1_T matlab1_B;

/* Block states (default storage) */
extern DW_matlab1_T matlab1_DW;
extern const ConstB_matlab1_T matlab1_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void matlab1_initialize(void);
extern void matlab1_step(void);
extern void matlab1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_matlab1_T *const matlab1_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'matlab1'
 * '<S1>'   : 'matlab1/If Action Subsystem1'
 * '<S2>'   : 'matlab1/If Action Subsystem10'
 * '<S3>'   : 'matlab1/If Action Subsystem2'
 * '<S4>'   : 'matlab1/If Action Subsystem3'
 * '<S5>'   : 'matlab1/If Action Subsystem4'
 * '<S6>'   : 'matlab1/If Action Subsystem6'
 * '<S7>'   : 'matlab1/If Action Subsystem7'
 * '<S8>'   : 'matlab1/If Action Subsystem8'
 * '<S9>'   : 'matlab1/If Action Subsystem9'
 */
#endif                                 /* RTW_HEADER_matlab1_h_ */
