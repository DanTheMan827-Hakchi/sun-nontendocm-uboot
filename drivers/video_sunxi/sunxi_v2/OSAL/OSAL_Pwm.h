#ifndef  __OSAL_PWM_H__
#define  __OSAL_PWM_H__

#include "OSAL.h"
#include <pwm.h>

#if !defined(CONFIG_PWM_SUNXI) || \
    defined(CONFIG_ARCH_SUN8IW5P1)
#define  __OSAL_PWM_MASK__
#endif

__hdle OSAL_Pwm_request(u32 pwm_id);

int OSAL_Pwm_free(__hdle p_handler);

int OSAL_Pwm_Enable(__hdle p_handler);

int OSAL_Pwm_Disable(__hdle p_handler);

int OSAL_Pwm_Config(__hdle p_handler, int duty_ns, int period_ns);

int OSAL_Pwm_Set_Polarity(__hdle p_handler, int polarity);

#endif
