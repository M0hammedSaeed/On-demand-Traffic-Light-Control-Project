/*******************************************************************************
 * [ File Name ]: led.c
 *
 * [Description]: Source File that contain implementation functions for LEDs.
 *
 * [   Author  ]: Mohamed Saeed
 *
 *******************************************************************************/

/*------------------------------------------------------------------------------
 *                                  Includes
 -------------------------------------------------------------------------------*/

#include "led.h"
#include "../../MCAL/GPIO/gpio.h"

/*------------------------------------------------------------------------------
 *                               FUNCTIONS IMPLEMENTATION
 *------------------------------------------------------------------------------*/

EN_LedState_t LED_TurnOn(EN_LedType_t LED_ID)
{
	switch(LED_ID)
	{
	case RED_LED_CAR_ID:
		GPIO_SetPinDir(LED_CAR_PORT_ID, LED_R_CAR_PIN_ID, pin_output);
#if(LED_CAR_CONFIG == NIGATIVE_LOGIC)
		GPIO_WritePin(LED_CAR_PORT_ID, LED_R_CAR_PIN_ID, logic_low);
#elif(LED_CAR_CONFIG == POSITIVE_LOGIC)
		GPIO_WritePin(LED_CAR_PORT_ID, LED_R_CAR_PIN_ID, logic_high);
#endif
		break;

	case YELLOW_LED_CAR_ID:
		GPIO_SetPinDir(LED_CAR_PORT_ID, LED_Y_CAR_PIN_ID, pin_output);
#if(LED_CAR_CONFIG == NIGATIVE_LOGIC)
		GPIO_WritePin(LED_CAR_PORT_ID, LED_Y_CAR_PIN_ID, logic_low);
#elif(LED_CAR_CONFIG == POSITIVE_LOGIC)
		GPIO_WritePin(LED_CAR_PORT_ID, LED_Y_CAR_PIN_ID, logic_high);
#endif
		break;

	case GREEN_LED_CAR_ID:
		GPIO_SetPinDir(LED_CAR_PORT_ID, LED_G_CAR_PIN_ID, pin_output);
#if(LED_CAR_CONFIG == NIGATIVE_LOGIC)
		GPIO_WritePin(LED_CAR_PORT_ID, LED_G_CAR_PIN_ID, logic_low);
#elif(LED_CAR_CONFIG == POSITIVE_LOGIC)
		GPIO_WritePin(LED_CAR_PORT_ID, LED_G_CAR_PIN_ID, logic_high);
#endif
		break;

	case RED_LED_PEDESTRIAN_ID:
		GPIO_SetPinDir(LED_PEDESTRIAN_PORT_ID, LED_R_PEDESTRIAN_PIN_ID, pin_output);
#if(LED_CAR_CONFIG == NIGATIVE_LOGIC)
		GPIO_WritePin(LED_PEDESTRIAN_PORT_ID, LED_R_PEDESTRIAN_PIN_ID, logic_low);
#elif(LED_CAR_CONFIG == POSITIVE_LOGIC)
		GPIO_WritePin(LED_PEDESTRIAN_PORT_ID, LED_R_PEDESTRIAN_PIN_ID, logic_high);
#endif
		break;

	case YELLOW_LED_PEDESTRIAN_ID:
		GPIO_SetPinDir(LED_PEDESTRIAN_PORT_ID, LED_Y_PEDESTRIAN_PIN_ID, pin_output);
#if(LED_CAR_CONFIG == NIGATIVE_LOGIC)
		GPIO_WritePin(LED_PEDESTRIAN_PORT_ID, LED_Y_PEDESTRIAN_PIN_ID, logic_low);
#elif(LED_CAR_CONFIG == POSITIVE_LOGIC)
		GPIO_WritePin(LED_PEDESTRIAN_PORT_ID, LED_Y_PEDESTRIAN_PIN_ID, logic_high);
#endif
		break;

	case GREEN_LED_PEDESTRIAN_ID:
		GPIO_SetPinDir(LED_PEDESTRIAN_PORT_ID, LED_G_PEDESTRIAN_PIN_ID, pin_output);
#if(LED_CAR_CONFIG == NIGATIVE_LOGIC)
		GPIO_WritePin(LED_PEDESTRIAN_PORT_ID, LED_G_PEDESTRIAN_PIN_ID, logic_low);
#elif(LED_CAR_CONFIG == POSITIVE_LOGIC)
		GPIO_WritePin(LED_PEDESTRIAN_PORT_ID, LED_G_PEDESTRIAN_PIN_ID, logic_high);
#endif
		break;
	}
	return LED_ON;
}

EN_LedState_t LED_TurnOff(EN_LedType_t LED_ID)
{
	switch(LED_ID)
	{
	case RED_LED_CAR_ID:
		GPIO_SetPinDir(LED_CAR_PORT_ID, LED_R_CAR_PIN_ID, pin_output);
#if(LED_CAR_CONFIG == NIGATIVE_LOGIC)
		GPIO_WritePin(LED_CAR_PORT_ID, LED_R_CAR_PIN_ID, logic_high);
#elif(LED_CAR_CONFIG == POSITIVE_LOGIC)
		GPIO_WritePin(LED_CAR_PORT_ID, LED_R_CAR_PIN_ID, logic_low);
#endif
		break;

	case YELLOW_LED_CAR_ID:
		GPIO_SetPinDir(LED_CAR_PORT_ID, LED_Y_CAR_PIN_ID, pin_output);
#if(LED_CAR_CONFIG == NIGATIVE_LOGIC)
		GPIO_WritePin(LED_CAR_PORT_ID, LED_Y_CAR_PIN_ID, logic_high);
#elif(LED_CAR_CONFIG == POSITIVE_LOGIC)
		GPIO_WritePin(LED_CAR_PORT_ID, LED_Y_CAR_PIN_ID, logic_low);
#endif
		break;

	case GREEN_LED_CAR_ID:
		GPIO_SetPinDir(LED_CAR_PORT_ID, LED_G_CAR_PIN_ID, pin_output);
#if(LED_CAR_CONFIG == NIGATIVE_LOGIC)
		GPIO_WritePin(LED_CAR_PORT_ID, LED_G_CAR_PIN_ID, logic_high);
#elif(LED_CAR_CONFIG == POSITIVE_LOGIC)
		GPIO_WritePin(LED_CAR_PORT_ID, LED_G_CAR_PIN_ID, logic_low);
#endif
		break;

	case RED_LED_PEDESTRIAN_ID:
		GPIO_SetPinDir(LED_PEDESTRIAN_PORT_ID, LED_R_PEDESTRIAN_PIN_ID, pin_output);
#if(LED_CAR_CONFIG == NIGATIVE_LOGIC)
		GPIO_WritePin(LED_PEDESTRIAN_PORT_ID, LED_R_PEDESTRIAN_PIN_ID, logic_high);
#elif(LED_CAR_CONFIG == POSITIVE_LOGIC)
		GPIO_WritePin(LED_PEDESTRIAN_PORT_ID, LED_R_PEDESTRIAN_PIN_ID, logic_low);
#endif
		break;

	case YELLOW_LED_PEDESTRIAN_ID:
		GPIO_SetPinDir(LED_PEDESTRIAN_PORT_ID, LED_Y_PEDESTRIAN_PIN_ID, pin_output);
#if(LED_CAR_CONFIG == NIGATIVE_LOGIC)
		GPIO_WritePin(LED_PEDESTRIAN_PORT_ID, LED_Y_PEDESTRIAN_PIN_ID, logic_high);
#elif(LED_CAR_CONFIG == POSITIVE_LOGIC)
		GPIO_WritePin(LED_PEDESTRIAN_PORT_ID, LED_Y_PEDESTRIAN_PIN_ID, logic_low);
#endif
		break;

	case GREEN_LED_PEDESTRIAN_ID:
		GPIO_SetPinDir(LED_PEDESTRIAN_PORT_ID, LED_G_PEDESTRIAN_PIN_ID, pin_output);
#if(LED_CAR_CONFIG == NIGATIVE_LOGIC)
		GPIO_WritePin(LED_PEDESTRIAN_PORT_ID, LED_G_PEDESTRIAN_PIN_ID, logic_high);
#elif(LED_CAR_CONFIG == POSITIVE_LOGIC)
		GPIO_WritePin(LED_PEDESTRIAN_PORT_ID, LED_G_PEDESTRIAN_PIN_ID, logic_low);
#endif
		break;
	}
	return LED_OFF;
}

