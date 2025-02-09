/****************************************************************************
 *
 * Copyright (c) ANCL Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file mc_dobibs_control_params.c
 * @author zhijun <zxue2@ualberta.ca>
 * Multicopter DOBIBS controller parameters.
 */

/**
 * Flag for choosing trajectory 
 *
 * 0 for Fig 8; 1 for Circle; 2 for Setpoint.
 * 
 * @unit norm
 * @min 0
 * @max 2
 * @decimal 2
 * @increment 1
 * @group Multicopter DOBIBS Control
 */
PARAM_DEFINE_INT32(MC_DOBIBS_TRAJ, 0);

/**
 * Controller Gain
 * 
 * @unit norm
 * @min 0
 * @decimal 2
 * @increment 0.1
 * @group Multicopter DOBIBS Control
 */
PARAM_DEFINE_FLOAT(DOBIBS_IBS_K1, 2.0f);

/**
 * Controller Gain
 * 
 * @unit norm
 * @min 0
 * @decimal 2
 * @increment 0.1
 * @group Multicopter DOBIBS Control
 */
PARAM_DEFINE_FLOAT(DOBIBS_IBS_K2, 2.0f);

/**
 * Controller Gain
 * 
 * @unit norm
 * @min 0
 * @decimal 2
 * @increment 0.1
 * @group Multicopter DOBIBS Control
 */
PARAM_DEFINE_FLOAT(DOBIBS_IBS_K3, 2.0f);

/**
 * Controller Gain
 * 
 * @unit norm
 * @min 0
 * @decimal 2
 * @increment 0.1
 * @group Multicopter DOBIBS Control
 */
PARAM_DEFINE_FLOAT(DOBIBS_IBS_K4, 2.0f);

/**
 * Controller Gain 
 * 
 * @unit norm
 * @min 0
 * @decimal 2
 * @increment 0.1
 * @group Multicopter DOBIBS Control
 */
PARAM_DEFINE_FLOAT(DOBIBS_IBS_K5, 2.0f);

/**
 * Controller Gain
 * 
 * @unit norm
 * @min 0
 * @decimal 2
 * @increment 0.1
 * @group Multicopter DOBIBS Control
 */
PARAM_DEFINE_FLOAT(DOBIBS_BS_K1, 2.0f);

/**
 * Controller Gain
 * 
 * @unit norm
 * @min 0
 * @decimal 2
 * @increment 0.1
 * @group Multicopter DOBIBS Control
 */
PARAM_DEFINE_FLOAT(DOBIBS_BS_K2, 2.0f);

/**
 * Controller Gain
 * 
 * @unit norm
 * @min 0
 * @decimal 2
 * @increment 0.1
 * @group Multicopter DOBIBS Control
 */
PARAM_DEFINE_FLOAT(DOBIBS_BS_K3, 2.0f);

/**
 * Controller Gain
 * 
 * @unit norm
 * @min 0
 * @decimal 2
 * @increment 0.1
 * @group Multicopter DOBIBS Control
 */
PARAM_DEFINE_FLOAT(DOBIBS_BS_K4, 2.0f);

/**
 * Disturbance Observer Gain
 * 
 * @unit norm
 * @min 0
 * @decimal 2
 * @increment 0.05
 * @group Multicopter DOBIBS Control
 */
PARAM_DEFINE_FLOAT(DOBIBS_DOG_K, 2.0f);

/**
*  Integration parameter
*/
PARAM_DEFINE_FLOAT(DOBIBS_I_PARAM,1.0f);
PARAM_DEFINE_FLOAT(DOBIBS_I_PARAM_MAX,2.0f);

PARAM_DEFINE_FLOAT(DOBIBS_I_U_PAR,1.0f);
PARAM_DEFINE_FLOAT(DOBIBS_I_U_PAR_MAX,30.0f);

PARAM_DEFINE_FLOAT(DOBIBS_I_DF_1,1.0f);
PARAM_DEFINE_FLOAT(DOBIBS_I_DF_1_MAX,12.0f);

PARAM_DEFINE_FLOAT(DOBIBS_I_DF_2,1.0f);
PARAM_DEFINE_FLOAT(DOBIBS_I_DF_2_MAX,12.0f);

PARAM_DEFINE_FLOAT(DOBIBS_I_DF_3,1.0f);
PARAM_DEFINE_FLOAT(DOBIBS_I_DF_3_MAX,12.0f);

PARAM_DEFINE_FLOAT(DOBIBS_I_W_PAR,1.0f);
PARAM_DEFINE_FLOAT(DOBIBS_I_W_PAR_MAX,0.7f);


PARAM_DEFINE_FLOAT(DOBIBS_D_PARAM_LP,0.1f);

