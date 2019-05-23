/*
 * matlab1_data.c
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

#include "matlab1.h"
#include "matlab1_private.h"

/* Invariant block signals (default storage) */
const ConstB_matlab1_T matlab1_ConstB = {
  0.0                                  /* '<Root>/Merge1' */
};

/* Block parameters (default storage) */
P_matlab1_T matlab1_P = {
  /* Expression: 1/13.5
   * Referenced by: '<Root>/Right Motor'
   */
  0.07407407407407407,

  /* Expression: 1/13.5
   * Referenced by: '<Root>/Left Motor '
   */
  0.07407407407407407,

  /* Expression: 1/13.5
   * Referenced by: '<Root>/DC Motor2'
   */
  0.07407407407407407,

  /* Expression: 1/13.5
   * Referenced by: '<Root>/DC Motor4'
   */
  0.07407407407407407,

  /* Expression: 1/13.5
   * Referenced by: '<Root>/Middle H Motor'
   */
  0.07407407407407407,

  /* Expression: -128
   * Referenced by: '<Root>/Constant2'
   */
  -128.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant4'
   */
  0.0,

  /* Expression: 127
   * Referenced by: '<Root>/Constant1'
   */
  127.0,

  /* Expression: 1
   * Referenced by: '<Root>/Gain1'
   */
  1.0,

  /* Expression: -128
   * Referenced by: '<Root>/Constant8'
   */
  -128.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant9'
   */
  0.0,

  /* Expression: 127
   * Referenced by: '<Root>/Constant10'
   */
  127.0,

  /* Expression: -128
   * Referenced by: '<Root>/Constant7'
   */
  -128.0,

  /* Expression: 127
   * Referenced by: '<Root>/Constant3'
   */
  127.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant6'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Gain2'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<Root>/Gain5'
   */
  -1.0,

  /* Start of '<Root>/If Action Subsystem10' */
  {
    /* Expression: 127
     * Referenced by: '<S2>/Out1'
     */
    127.0
  }
  ,

  /* End of '<Root>/If Action Subsystem10' */

  /* Start of '<Root>/If Action Subsystem9' */
  {
    /* Expression: 127
     * Referenced by: '<S9>/Out1'
     */
    127.0
  }
  ,

  /* End of '<Root>/If Action Subsystem9' */

  /* Start of '<Root>/If Action Subsystem7' */
  {
    /* Expression: 127
     * Referenced by: '<S7>/Out1'
     */
    127.0
  }
  ,

  /* End of '<Root>/If Action Subsystem7' */

  /* Start of '<Root>/If Action Subsystem6' */
  {
    /* Expression: 127
     * Referenced by: '<S6>/Out1'
     */
    127.0
  }
  ,

  /* End of '<Root>/If Action Subsystem6' */

  /* Start of '<Root>/If Action Subsystem1' */
  {
    /* Expression: 127
     * Referenced by: '<S1>/Out1'
     */
    127.0
  }
  ,

  /* End of '<Root>/If Action Subsystem1' */

  /* Start of '<Root>/If Action Subsystem4' */
  {
    /* Expression: 127
     * Referenced by: '<S5>/Out1'
     */
    127.0
  }
  /* End of '<Root>/If Action Subsystem4' */
};
