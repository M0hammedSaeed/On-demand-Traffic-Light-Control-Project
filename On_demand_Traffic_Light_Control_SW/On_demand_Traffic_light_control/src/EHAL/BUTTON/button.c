/*******************************************************************************
 * [ File Name ]: button.c
 *
 * [Description]: Source File that contain implementation functions for Button.
 *
 * [   Author  ]: Mohamed Saeed
 *
 *******************************************************************************/

/*------------------------------------------------------------------------------
 *                                  Includes
 -------------------------------------------------------------------------------*/

#include "button.h"
#include "../../MCAL/GPIO/gpio.h"

/*------------------------------------------------------------------------------
 *                               FUNCTIONS IMPLEMENTATION
 *------------------------------------------------------------------------------*/

void BUTTON_Init(void)
{
	GPIO_SetPinDir(BUTTON_PORT_ID, BUTTON_PIN_ID, pin_input);
#if(BUTTON1_PULL == EXT_PULL_DOWN)
	GPIO_WritePin(BUTTON_PORT_ID, BUTTON_PIN_ID, logic_low);
#elif(BUTTON1_PULL == EXT_PULL_UP)
	GPIO_WritePin(BUTTON_PORT_ID, BUTTON_PIN_ID, logic_high);
#elif(BUTTON1_PULL == INT_PULL_UP)
	GPIO_WritePin(BUTTON_PORT_ID, BUTTON_PIN_ID, logic_high);
#endif

}

EN_Button_State_t BUTTON_IsPressed(void)
{
#if(BUTTON1_PULL == EXT_PULL_DOWN)
	if(GPIO_ReadPin(BUTTON_PORT_ID, BUTTON_PIN_ID))
	{
		return pressed;
	}
	else
	{
		return unpressed;
	}
#elif(BUTTON1_PULL == EXT_PULL_UP)
	if(GPIO_ReadPin(BUTTON_PORT_ID, BUTTON_PIN_ID))
	{
		return unpressed;
	}
	else
	{
		return pressed;
	}
#elif(BUTTON1_PULL == INT_PULL_UP)
	if(GPIO_ReadPin(BUTTON_PORT_ID, BUTTON_PIN_ID))
	{
		return unpressed;
	}
	else
	{
		return pressed;
	}
#endif
}
