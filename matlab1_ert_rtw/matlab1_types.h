/*
 * matlab1_types.h
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

#ifndef RTW_HEADER_matlab1_types_h_
#define RTW_HEADER_matlab1_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef typedef_vex_GamepadButton_matlab1_T
#define typedef_vex_GamepadButton_matlab1_T

typedef struct {
  int32_T isInitialized;
} vex_GamepadButton_matlab1_T;

#endif                                 /*typedef_vex_GamepadButton_matlab1_T*/

#ifndef typedef_vex_DCMotor_matlab1_T
#define typedef_vex_DCMotor_matlab1_T

typedef struct {
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  real_T scaleFactor;
} vex_DCMotor_matlab1_T;

#endif                                 /*typedef_vex_DCMotor_matlab1_T*/

/* Parameters for system: '<Root>/If Action Subsystem4' */
typedef struct P_IfActionSubsystem4_matlab1_T_ P_IfActionSubsystem4_matlab1_T;

/* Parameters (default storage) */
typedef struct P_matlab1_T_ P_matlab1_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_matlab1_T RT_MODEL_matlab1_T;

#endif                                 /* RTW_HEADER_matlab1_types_h_ */
