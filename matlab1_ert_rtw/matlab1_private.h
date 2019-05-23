/*
 * matlab1_private.h
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

#ifndef RTW_HEADER_matlab1_private_h_
#define RTW_HEADER_matlab1_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "matlab1.h"

extern real_T rt_roundd_snf(real_T u);
extern void matlab1_GamepadButton1_Start(DW_GamepadButton1_matlab1_T *localDW);
extern void matlab1_GamepadButton1(B_GamepadButton1_matlab1_T *localB);
extern void matlab1_GamepadButton3_Start(DW_GamepadButton3_matlab1_T *localDW);
extern void matlab1_GamepadButton3(B_GamepadButton3_matlab1_T *localB);
extern void matlab1_IfActionSubsystem4_Init(real_T *rty_Out1,
  P_IfActionSubsystem4_matlab1_T *localP);
extern void matlab1_IfActionSubsystem4(real_T rtu_In1, real_T *rty_Out1);
extern void matlab1_IfActionSubsystem2(real_T rtu_In1, real_T *rty_Out1);

#endif                                 /* RTW_HEADER_matlab1_private_h_ */
