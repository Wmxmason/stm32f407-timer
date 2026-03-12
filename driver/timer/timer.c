#include "timer.h"

void timer_init(const timer_desc_t *desc)
{
    TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
    TIM_TimeBaseStructure.TIM_Period = desc->tim_Period;
    TIM_TimeBaseStructure.TIM_Prescaler = desc->tim_Prescaler;
    TIM_TimeBaseStructure.TIM_ClockDivision = desc->tim_ClockDivision;
    TIM_TimeBaseStructure.TIM_CounterMode = desc->tim_CounterMode;
    TIM_TimeBaseInit(desc->timx, &TIM_TimeBaseStructure);
}
