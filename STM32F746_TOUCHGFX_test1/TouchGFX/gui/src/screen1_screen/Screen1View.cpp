#include <gui/screen1_screen/Screen1View.hpp>
#include "stm32746g_discovery.h"

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}


void Screen1View::hjhfunc()
{
   HAL_GPIO_TogglePin(LED1_GPIO_PORT, LED1_PIN);
}
