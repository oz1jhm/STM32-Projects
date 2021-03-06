/**
  ******************************************************************************
  * File Name          : STM32TouchController.cpp
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* USER CODE BEGIN STM32TouchController */

#include <STM32TouchController.hpp>
#include "stm32746g_discovery_ts.h"

void STM32TouchController::init()
{
    /**
     * Initialize touch controller and driver
     *
     */
   BSP_TS_Init(480, 320);
}

bool STM32TouchController::sampleTouch(int32_t& x, int32_t& y)
{
   TS_StateTypeDef state = {0};
   BSP_TS_GetState(&state);
   if(state.touchDetected){
	   x = state.touchX[0];
	   y = state.touchY[0];
	   return true;
   }
    return false;
}

/* USER CODE END STM32TouchController */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
