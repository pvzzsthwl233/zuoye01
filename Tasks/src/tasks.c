
#include "tasks.h"
#include "main.h"


extern IWDG_HandleTypeDef hiwdg;
extern TIM_HandleTypeDef htim3;


volatile uint32_t tick = 0;

void Tasks_Init(void)
{
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
}


void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if (htim->Instance == TIM3)
    {
        tick++;
       /* HAL_IWDG_Refresh(&hiwdg);  */
    }
}