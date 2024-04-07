
/*******************************************************************************
 * [Module Name]: app.h
 *
 * [Description]: Header file that contain Functions Prototypes for Applications.
 *
 * [Author]: Mohamed Saeed
 *******************************************************************************/

#ifndef SRC_APP_APP_H_
#define SRC_APP_APP_H_

/*******************************************************************************
 *                                  Includes
 *******************************************************************************/

#include "../utils/std_types.h"

/*******************************************************************************
 *                     		 	Functions Prototypes                           *
 *******************************************************************************/

/*
 * [Function Name]: APP_init
 * [Description]  : This function is responsible to initialize the application.
 * [Args]  : void
 * [Return]: void
 */
void APP_init(void);

/*
 * [Function Name]: APP_start
 * [Description]  : This function is responsible to start the application.
 * [Args]  : void
 * [Return]: void
 */
void APP_start(void);

/*
 * [Function Name]: APP_normalMode
 * [Description]  : This function is responsible to work the Led's of traffic for car
 *              	like in real life (yellow -> red -> yellow -> green).
 * [Args]  : void
 * [Return]: void
 */
void APP_normalMode(void);

/*
 * [Function Name]: APP_pedestrianMode
 * [Description]  : This function is responsible to work the traffic of pedestrian when person
 *              	Press the button.
 * [Args]  : void
 * [Return]: void
 */
void APP_pedestrianMode(void);

/*
 * [Function Name]: APP_firstCase
 * [Description]  : This function is responsible to handle the balance between the two Traffic
 *              	when the person press the Button when traffic of car was in Green light
 *             		or yellow light.
 * [Args]  : void
 * [Return]: void
 */
void APP_firstCase(void);

/*
 * [Function Name]: APP_secondCase
 * [Description]  : This function is responsible to handle the balance between the two Traffic
 *              	when the person press the Button when traffic of car was in Red light.
 * [Args]  : void
 * [Return]: void
 */
void APP_secondCase(void);

/*
 * [Function Name]: APP_intCase
 * [Description]  : This function is responsible to handle the button is pressed or not by
 * 					External Interrupt and call the function in (ISR).
 * [Args]  : void
 * [Return]: void
 */
void APP_intCase(void);

/*
 * [Function Name]: APP_timerCarLed
 * [Description]  : This function is responsible to handle the time of Car led on by timer and call the function in (ISR).
 * [Args]  : void
 * [Return]: void
 */
void APP_timerCarLed(void);

/*
 * [Function Name]: APP_timerPedestrianLed
 * [Description]  : This function is responsible to handle the time of Pedestrian led on by timer and call the function in (ISR).
 * [Args]  : void
 * [Return]: void
 */
void APP_timerPedestrianLed(void);

#endif /* SRC_APP_APP_H_ */
