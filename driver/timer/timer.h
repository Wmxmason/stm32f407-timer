#ifndef __TIMER_H
#define __TIMER_H

#include "stdint.h"
#include "stm32f4xx.h"

typedef struct timer_desc
{
    TIM_TypeDef * timx;
    uint16_t tim_Prescaler;
    uint16_t tim_CounterMode;
    uint32_t tim_Period;
    uint16_t tim_ClockDivision;
    uint8_t tim_RepetitionCounter;
}timer_desc_t;

void timer_init(const timer_desc_t *desc);

#endif
