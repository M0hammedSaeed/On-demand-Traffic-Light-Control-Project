/*******************************************************************************
 * [ File Name ]: button.h
 *
 * [Description]: Header File that contain functions prototypes for Button.
 *
 * [   Author  ]: Mohamed Saeed
 *
 *******************************************************************************/

#ifndef SRC_EHAL_BUTTON_BUTTON_H_
#define SRC_EHAL_BUTTON_BUTTON_H_

/*------------------------------------------------------------------------------
 *                                  Includes
 -------------------------------------------------------------------------------*/

#include "../../utils/std_types.h"

/*------------------------------------------------------------------------------
 *                              Definitions & Configuration
 -------------------------------------------------------------------------------*/

#define INT_PULL_UP			0
#define EXT_PULL_UP     	1
#define EXT_PULL_DOWN 	  	2

typedef enum
{
	unpressed,
	pressed

}EN_Button_State_t;

#define BUTTON_PORT_ID			PORTD_ID
#define BUTTON_PIN_ID			PIN2_ID
#define	BUTTON1_CONFIG			EXT_PULL_DOWN

/*------------------------------------------------------------------------------
 *                             Function Prototype
 -------------------------------------------------------------------------------*/

void BUTTON_Init(void);
EN_Button_State_t BUTTON_IsPressed(void);

#endif /* SRC_EHAL_BUTTON_BUTTON_H_ */
