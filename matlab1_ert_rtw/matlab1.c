/*
 * matlab1.c
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

/* Block signals (default storage) */
B_matlab1_T matlab1_B;

/* Block states (default storage) */
DW_matlab1_T matlab1_DW;

/* Real-time model */
RT_MODEL_matlab1_T matlab1_M_;
RT_MODEL_matlab1_T *const matlab1_M = &matlab1_M_;

/*
 * Start for atomic system:
 *    synthesized block
 *    synthesized block
 */
void matlab1_GamepadButton1_Start(DW_GamepadButton1_matlab1_T *localDW)
{
  /* Start for MATLABSystem: '<Root>/Gamepad Button1' */
  localDW->obj.isInitialized = 0;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
}

/*
 * Output and update for atomic system:
 *    synthesized block
 *    synthesized block
 */
void matlab1_GamepadButton1(B_GamepadButton1_matlab1_T *localB)
{
  /* MATLABSystem: '<Root>/Gamepad Button1' */
  localB->GamepadButton1 = joystickGetDigital(1, 5, 4);
}

/*
 * Start for atomic system:
 *    synthesized block
 *    synthesized block
 */
void matlab1_GamepadButton3_Start(DW_GamepadButton3_matlab1_T *localDW)
{
  /* Start for MATLABSystem: '<Root>/Gamepad Button3' */
  localDW->obj.isInitialized = 0;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
}

/*
 * Output and update for atomic system:
 *    synthesized block
 *    synthesized block
 */
void matlab1_GamepadButton3(B_GamepadButton3_matlab1_T *localB)
{
  /* MATLABSystem: '<Root>/Gamepad Button3' */
  localB->GamepadButton3 = joystickGetDigital(1, 6, 4);
}

/*
 * System initialize for action system:
 *    '<Root>/If Action Subsystem4'
 *    '<Root>/If Action Subsystem1'
 *    '<Root>/If Action Subsystem6'
 *    '<Root>/If Action Subsystem7'
 *    '<Root>/If Action Subsystem9'
 *    '<Root>/If Action Subsystem10'
 */
void matlab1_IfActionSubsystem4_Init(real_T *rty_Out1,
  P_IfActionSubsystem4_matlab1_T *localP)
{
  /* SystemInitialize for Outport: '<S5>/Out1' */
  *rty_Out1 = localP->Out1_Y0;
}

/*
 * Output and update for action system:
 *    '<Root>/If Action Subsystem4'
 *    '<Root>/If Action Subsystem1'
 *    '<Root>/If Action Subsystem6'
 *    '<Root>/If Action Subsystem7'
 *    '<Root>/If Action Subsystem9'
 *    '<Root>/If Action Subsystem10'
 */
void matlab1_IfActionSubsystem4(real_T rtu_In1, real_T *rty_Out1)
{
  /* Inport: '<S5>/In1' */
  *rty_Out1 = rtu_In1;
}

/*
 * Output and update for action system:
 *    '<Root>/If Action Subsystem2'
 *    '<Root>/If Action Subsystem3'
 *    '<Root>/If Action Subsystem8'
 */
void matlab1_IfActionSubsystem2(real_T rtu_In1, real_T *rty_Out1)
{
  /* Inport: '<S3>/In1' */
  *rty_Out1 = rtu_In1;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void matlab1_step(void)
{
  /* local block i/o variables */
  real_T rtb_Merge4;
  real_T rtb_Merge3;
  real_T rtb_Merge2;
  real_T rtb_Gain1;
  int32_T tmp;
  matlab1_GamepadButton1(&matlab1_B.GamepadButton6);
  matlab1_GamepadButton3(&matlab1_B.GamepadButton5);

  /* If: '<Root>/If1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   *  Constant: '<Root>/Constant4'
   */
  if (matlab1_B.GamepadButton6.GamepadButton1 > 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    matlab1_IfActionSubsystem4(matlab1_P.Constant2_Value, &rtb_Merge2);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
  } else if (matlab1_B.GamepadButton5.GamepadButton3 > 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    matlab1_IfActionSubsystem4(matlab1_P.Constant1_Value, &rtb_Merge2);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    matlab1_IfActionSubsystem2(matlab1_P.Constant4_Value, &rtb_Merge2);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
  }

  /* End of If: '<Root>/If1' */

  /* Gain: '<Root>/Gain1' */
  rtb_Gain1 = matlab1_P.Gain1_Gain * rtb_Merge2;

  /* MATLABSystem: '<Root>/Middle H Motor' */
  if (matlab1_DW.obj.scaleFactor != matlab1_P.MiddleHMotor_scaleFactor) {
    if (matlab1_DW.obj.isInitialized == 1) {
      matlab1_DW.obj.TunablePropsChanged = true;
    }

    matlab1_DW.obj.scaleFactor = matlab1_P.MiddleHMotor_scaleFactor;
  }

  if (matlab1_DW.obj.TunablePropsChanged) {
    matlab1_DW.obj.TunablePropsChanged = false;
  }

  if (rtb_Gain1 > 127.0) {
    rtb_Gain1 = 127.0;
  } else {
    if (rtb_Gain1 < -128.0) {
      rtb_Gain1 = -128.0;
    }
  }

  rtb_Gain1 = rt_roundd_snf(rtb_Gain1);
  if (rtb_Gain1 < 2.147483648E+9) {
    tmp = (int32_T)rtb_Gain1;
  } else {
    tmp = MAX_int32_T;
  }

  motorSet(3, tmp);

  /* End of MATLABSystem: '<Root>/Middle H Motor' */

  /* MATLABSystem: '<Root>/Gamepad Button3' */
  matlab1_GamepadButton3(&matlab1_B.GamepadButton3);

  /* MATLABSystem: '<Root>/Gamepad Button4' */
  rtb_Gain1 = joystickGetDigital(1, 6, 1);

  /* If: '<Root>/If4' incorporates:
   *  Constant: '<Root>/Constant10'
   *  Constant: '<Root>/Constant8'
   *  Constant: '<Root>/Constant9'
   *  MATLABSystem: '<Root>/Gamepad Button4'
   */
  if (matlab1_B.GamepadButton3.GamepadButton3 > 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem9' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    matlab1_IfActionSubsystem4(matlab1_P.Constant8_Value, &rtb_Merge4);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem9' */
  } else if (rtb_Gain1 > 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem10' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    matlab1_IfActionSubsystem4(matlab1_P.Constant10_Value, &rtb_Merge4);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem10' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem8' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    matlab1_IfActionSubsystem2(matlab1_P.Constant9_Value, &rtb_Merge4);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem8' */
  }

  /* End of If: '<Root>/If4' */

  /* MATLABSystem: '<Root>/DC Motor4' */
  if (matlab1_DW.obj_b.scaleFactor != matlab1_P.DCMotor4_scaleFactor) {
    if (matlab1_DW.obj_b.isInitialized == 1) {
      matlab1_DW.obj_b.TunablePropsChanged = true;
    }

    matlab1_DW.obj_b.scaleFactor = matlab1_P.DCMotor4_scaleFactor;
  }

  if (matlab1_DW.obj_b.TunablePropsChanged) {
    matlab1_DW.obj_b.TunablePropsChanged = false;
  }

  if (rtb_Merge4 > 127.0) {
    rtb_Gain1 = 127.0;
  } else if (rtb_Merge4 < -128.0) {
    rtb_Gain1 = -128.0;
  } else {
    rtb_Gain1 = rtb_Merge4;
  }

  rtb_Gain1 = rt_roundd_snf(rtb_Gain1);
  if (rtb_Gain1 < 2.147483648E+9) {
    if (rtb_Gain1 >= -2.147483648E+9) {
      tmp = (int32_T)rtb_Gain1;
    } else {
      tmp = MIN_int32_T;
    }
  } else {
    tmp = MAX_int32_T;
  }

  motorSet(6, tmp);

  /* End of MATLABSystem: '<Root>/DC Motor4' */

  /* MATLABSystem: '<Root>/Gamepad Button1' */
  matlab1_GamepadButton1(&matlab1_B.GamepadButton1);

  /* MATLABSystem: '<Root>/Gamepad Button2' */
  rtb_Gain1 = joystickGetDigital(1, 5, 1);

  /* If: '<Root>/If3' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Constant: '<Root>/Constant6'
   *  Constant: '<Root>/Constant7'
   *  MATLABSystem: '<Root>/Gamepad Button2'
   */
  if (matlab1_B.GamepadButton1.GamepadButton1 > 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem6' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    matlab1_IfActionSubsystem4(matlab1_P.Constant3_Value, &rtb_Merge3);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem6' */
  } else if (rtb_Gain1 > 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem7' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    matlab1_IfActionSubsystem4(matlab1_P.Constant7_Value, &rtb_Merge3);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem7' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    matlab1_IfActionSubsystem2(matlab1_P.Constant6_Value, &rtb_Merge3);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
  }

  /* End of If: '<Root>/If3' */

  /* MATLABSystem: '<Root>/DC Motor2' */
  if (matlab1_DW.obj_d.scaleFactor != matlab1_P.DCMotor2_scaleFactor) {
    if (matlab1_DW.obj_d.isInitialized == 1) {
      matlab1_DW.obj_d.TunablePropsChanged = true;
    }

    matlab1_DW.obj_d.scaleFactor = matlab1_P.DCMotor2_scaleFactor;
  }

  if (matlab1_DW.obj_d.TunablePropsChanged) {
    matlab1_DW.obj_d.TunablePropsChanged = false;
  }

  if (rtb_Merge3 > 127.0) {
    rtb_Gain1 = 127.0;
  } else if (rtb_Merge3 < -128.0) {
    rtb_Gain1 = -128.0;
  } else {
    rtb_Gain1 = rtb_Merge3;
  }

  rtb_Gain1 = rt_roundd_snf(rtb_Gain1);
  if (rtb_Gain1 < 2.147483648E+9) {
    if (rtb_Gain1 >= -2.147483648E+9) {
      tmp = (int32_T)rtb_Gain1;
    } else {
      tmp = MIN_int32_T;
    }
  } else {
    tmp = MAX_int32_T;
  }

  motorSet(5, tmp);

  /* End of MATLABSystem: '<Root>/DC Motor2' */

  /* MATLABSystem: '<Root>/Gamepad Joystick5' */
  rtb_Gain1 = joystickGetAnalog(1, 3);

  /* Gain: '<Root>/Gain2' incorporates:
   *  MATLABSystem: '<Root>/Gamepad Joystick5'
   */
  rtb_Gain1 *= matlab1_P.Gain2_Gain;

  /* MATLABSystem: '<Root>/Left Motor ' */
  if (matlab1_DW.obj_c.scaleFactor != matlab1_P.LeftMotor_scaleFactor) {
    if (matlab1_DW.obj_c.isInitialized == 1) {
      matlab1_DW.obj_c.TunablePropsChanged = true;
    }

    matlab1_DW.obj_c.scaleFactor = matlab1_P.LeftMotor_scaleFactor;
  }

  if (matlab1_DW.obj_c.TunablePropsChanged) {
    matlab1_DW.obj_c.TunablePropsChanged = false;
  }

  if (rtb_Gain1 > 127.0) {
    rtb_Gain1 = 127.0;
  } else {
    if (rtb_Gain1 < -128.0) {
      rtb_Gain1 = -128.0;
    }
  }

  rtb_Gain1 = rt_roundd_snf(rtb_Gain1);
  if (rtb_Gain1 < 2.147483648E+9) {
    tmp = (int32_T)rtb_Gain1;
  } else {
    tmp = MAX_int32_T;
  }

  motorSet(4, tmp);

  /* End of MATLABSystem: '<Root>/Left Motor ' */

  /* MATLABSystem: '<Root>/Gamepad Joystick2' */
  rtb_Gain1 = joystickGetAnalog(1, 2);

  /* Gain: '<Root>/Gain5' incorporates:
   *  MATLABSystem: '<Root>/Gamepad Joystick2'
   */
  rtb_Gain1 *= matlab1_P.Gain5_Gain;

  /* MATLABSystem: '<Root>/Right Motor' */
  if (matlab1_DW.obj_o.scaleFactor != matlab1_P.RightMotor_scaleFactor) {
    if (matlab1_DW.obj_o.isInitialized == 1) {
      matlab1_DW.obj_o.TunablePropsChanged = true;
    }

    matlab1_DW.obj_o.scaleFactor = matlab1_P.RightMotor_scaleFactor;
  }

  if (matlab1_DW.obj_o.TunablePropsChanged) {
    matlab1_DW.obj_o.TunablePropsChanged = false;
  }

  if (rtb_Gain1 > 127.0) {
    rtb_Gain1 = 127.0;
  } else {
    if (rtb_Gain1 < -128.0) {
      rtb_Gain1 = -128.0;
    }
  }

  rtb_Gain1 = rt_roundd_snf(rtb_Gain1);
  if (rtb_Gain1 < 2.147483648E+9) {
    tmp = (int32_T)rtb_Gain1;
  } else {
    tmp = MAX_int32_T;
  }

  motorSet(2, tmp);

  /* End of MATLABSystem: '<Root>/Right Motor' */

  /* MATLABSystem: '<Root>/Gamepad Button7' */
  joystickGetDigital(1, 8, 4);

  /* MATLABSystem: '<Root>/Gamepad Button8' */
  joystickGetDigital(1, 8, 2);
}

/* Model initialize function */
void matlab1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(matlab1_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &matlab1_B), 0,
                sizeof(B_matlab1_T));

  /* states (dwork) */
  (void) memset((void *)&matlab1_DW, 0,
                sizeof(DW_matlab1_T));
  matlab1_GamepadButton1_Start(&matlab1_DW.GamepadButton6);
  matlab1_GamepadButton3_Start(&matlab1_DW.GamepadButton5);

  /* Start for MATLABSystem: '<Root>/Middle H Motor' */
  matlab1_DW.obj.isInitialized = 0;
  matlab1_DW.objisempty = true;
  if (matlab1_DW.obj.isInitialized == 1) {
    matlab1_DW.obj.TunablePropsChanged = true;
  }

  matlab1_DW.obj.scaleFactor = matlab1_P.MiddleHMotor_scaleFactor;
  matlab1_DW.obj.isInitialized = 1;
  matlab1_DW.obj.TunablePropsChanged = false;

  /* End of Start for MATLABSystem: '<Root>/Middle H Motor' */

  /* Start for MATLABSystem: '<Root>/Gamepad Button3' */
  matlab1_GamepadButton3_Start(&matlab1_DW.GamepadButton3);

  /* Start for MATLABSystem: '<Root>/Gamepad Button4' */
  matlab1_DW.obj_l.isInitialized = 0;
  matlab1_DW.objisempty_b = true;
  matlab1_DW.obj_l.isInitialized = 1;

  /* Start for MATLABSystem: '<Root>/DC Motor4' */
  matlab1_DW.obj_b.isInitialized = 0;
  matlab1_DW.objisempty_m = true;
  if (matlab1_DW.obj_b.isInitialized == 1) {
    matlab1_DW.obj_b.TunablePropsChanged = true;
  }

  matlab1_DW.obj_b.scaleFactor = matlab1_P.DCMotor4_scaleFactor;
  matlab1_DW.obj_b.isInitialized = 1;
  matlab1_DW.obj_b.TunablePropsChanged = false;

  /* End of Start for MATLABSystem: '<Root>/DC Motor4' */

  /* Start for MATLABSystem: '<Root>/Gamepad Button1' */
  matlab1_GamepadButton1_Start(&matlab1_DW.GamepadButton1);

  /* Start for MATLABSystem: '<Root>/Gamepad Button2' */
  matlab1_DW.obj_ds.isInitialized = 0;
  matlab1_DW.objisempty_f = true;
  matlab1_DW.obj_ds.isInitialized = 1;

  /* Start for MATLABSystem: '<Root>/DC Motor2' */
  matlab1_DW.obj_d.isInitialized = 0;
  matlab1_DW.objisempty_p = true;
  if (matlab1_DW.obj_d.isInitialized == 1) {
    matlab1_DW.obj_d.TunablePropsChanged = true;
  }

  matlab1_DW.obj_d.scaleFactor = matlab1_P.DCMotor2_scaleFactor;
  matlab1_DW.obj_d.isInitialized = 1;
  matlab1_DW.obj_d.TunablePropsChanged = false;

  /* End of Start for MATLABSystem: '<Root>/DC Motor2' */

  /* Start for MATLABSystem: '<Root>/Gamepad Joystick5' */
  matlab1_DW.obj_cj.isInitialized = 0;
  matlab1_DW.objisempty_h = true;
  matlab1_DW.obj_cj.isInitialized = 1;

  /* Start for MATLABSystem: '<Root>/Left Motor ' */
  matlab1_DW.obj_c.isInitialized = 0;
  matlab1_DW.objisempty_py = true;
  if (matlab1_DW.obj_c.isInitialized == 1) {
    matlab1_DW.obj_c.TunablePropsChanged = true;
  }

  matlab1_DW.obj_c.scaleFactor = matlab1_P.LeftMotor_scaleFactor;
  matlab1_DW.obj_c.isInitialized = 1;
  matlab1_DW.obj_c.TunablePropsChanged = false;

  /* End of Start for MATLABSystem: '<Root>/Left Motor ' */

  /* Start for MATLABSystem: '<Root>/Gamepad Joystick2' */
  matlab1_DW.obj_p.isInitialized = 0;
  matlab1_DW.objisempty_pv = true;
  matlab1_DW.obj_p.isInitialized = 1;

  /* Start for MATLABSystem: '<Root>/Right Motor' */
  matlab1_DW.obj_o.isInitialized = 0;
  matlab1_DW.objisempty_n = true;
  if (matlab1_DW.obj_o.isInitialized == 1) {
    matlab1_DW.obj_o.TunablePropsChanged = true;
  }

  matlab1_DW.obj_o.scaleFactor = matlab1_P.RightMotor_scaleFactor;
  matlab1_DW.obj_o.isInitialized = 1;
  matlab1_DW.obj_o.TunablePropsChanged = false;

  /* End of Start for MATLABSystem: '<Root>/Right Motor' */

  /* Start for MATLABSystem: '<Root>/Gamepad Button7' */
  matlab1_DW.obj_bh.isInitialized = 0;
  matlab1_DW.objisempty_bh = true;
  matlab1_DW.obj_bh.isInitialized = 1;

  /* Start for MATLABSystem: '<Root>/Gamepad Button8' */
  matlab1_DW.obj_b0.isInitialized = 0;
  matlab1_DW.objisempty_hd = true;
  matlab1_DW.obj_b0.isInitialized = 1;

  {
    /* local block i/o variables */
    real_T rtb_Merge4;
    real_T rtb_Merge3;
    real_T rtb_Merge2;

    /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem4' */
    matlab1_IfActionSubsystem4_Init(&rtb_Merge2, &matlab1_P.IfActionSubsystem4);

    /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem4' */

    /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem1' */
    matlab1_IfActionSubsystem4_Init(&rtb_Merge2, &matlab1_P.IfActionSubsystem1);

    /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem1' */

    /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem9' */
    matlab1_IfActionSubsystem4_Init(&rtb_Merge4, &matlab1_P.IfActionSubsystem9);

    /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem9' */

    /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem10' */
    matlab1_IfActionSubsystem4_Init(&rtb_Merge4, &matlab1_P.IfActionSubsystem10);

    /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem10' */

    /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem6' */
    matlab1_IfActionSubsystem4_Init(&rtb_Merge3, &matlab1_P.IfActionSubsystem6);

    /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem6' */

    /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem7' */
    matlab1_IfActionSubsystem4_Init(&rtb_Merge3, &matlab1_P.IfActionSubsystem7);

    /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem7' */
  }
}

/* Model terminate function */
void matlab1_terminate(void)
{
  /* (no terminate code required) */
}
