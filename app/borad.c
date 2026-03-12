#include "borad.h"
void borad_init(void)
{
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
}

const timer_desc_t timer2_desc = {
    .timx = TIM2,
    .tim_Prescaler = 84 - 1,
    .tim_CounterMode = TIM_CounterMode_Up,
    .tim_Period = 1000,
    .tim_ClockDivision = 0,
    .tim_RepetitionCounter = 0
};
