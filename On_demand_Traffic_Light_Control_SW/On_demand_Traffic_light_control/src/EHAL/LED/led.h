/*******************************************************************************
 * [ File Name ]: led.h
 *
 * [Description]: Header File that contain functions prototypes for LEDs.
 *
 * [   Author  ]: Mohamed Saeed
 *
 *******************************************************************************/

#ifndef SRC_EHAL_LED_LED_H_
#define SRC_EHAL_LED_LED_H_

/*------------------------------------------------------------------------------
 *                                  Includes
 -------------------------------------------------------------------------------*/

#include "../../utils/std_types.h"

/*------------------------------------------------------------------------------
 *                              Definitions
 -------------------------------------------------------------------------------*/

#define NIGATIVE_LOGIC		0
#define POSITIVE_LOGIC		1

typedef enum
{
	RED_LED_CAR_ID,
	YELLOW_LED_CAR_ID,
	GREEN_LED_CAR_ID,

	RED_LED_PEDESTRIAN_ID,
	YELLOW_LED_PEDESTRIAN_ID,
	GREEN_LED_PEDESTRIAN_ID
}EN_LedType_t;

typedef enum
{
	LED_OFF,
	LED_ON
}EN_LedState_t;

#define LED_CAR_CONFIG					POSITIVE_LOGIC
#define LED_PEDESTRIAN_CONFIG			POSITIVE_LOGIC

#define LED_CAR_PORT_ID					PORTA_ID
#define LED_PEDESTRIAN_PORT_ID			PORTB_ID

#define LED_R_CAR_PIN_ID				PIN2_ID
#define LED_Y_CAR_PIN_ID				PIN1_ID
#define LED_G_CAR_PIN_ID				PIN0_ID

#define LED_R_PEDESTRIAN_PIN_ID			PIN2_ID
#define LED_Y_PEDESTRIAN_PIN_ID			PIN1_ID
#define LED_G_PEDESTRIAN_PIN_ID			PIN0_ID

/*------------------------------------------------------------------------------
 *                             Function Prototype
 -------------------------------------------------------------------------------*/

EN_LedState_t LED_TurnOn(EN_LedType_t LED_ID);
EN_LedState_t LED_TurnOff(EN_LedType_t LED_ID);
EN_LedState_t LED_TurnToggle(EN_LedType_t LED_ID);

#endif /* SRC_EHAL_LED_LED_H_ */
