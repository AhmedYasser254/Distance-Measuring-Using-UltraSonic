/**************************************************************************************
 * Module : UltraSonic
 *
 * File Name : ultraSonic.h
 *
 * Description : Header File For The UltraSonic Module
 *
 * Author: Ahmed Yasser
 *
 **************************************************************************************/

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include "std_types.h"





/*******************************************************************************************
 * 										Function ProtoTypes							       *
 *******************************************************************************************/


uint16 Ultrasonic_readDistance(void);

void Ultrasonic_init(void);

void Ultrasonic_edgeProcessing(void);

void Ultrasonic_Trigger(void);

#endif /* ULTRASONIC_H_ */
