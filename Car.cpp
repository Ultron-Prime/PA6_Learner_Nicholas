/* -------------------------------------------------

FILE:		Car.cpp
DESCRIPTION:	Car.cpp file for Project 6 for Fall 2019 CS 202-1001 at UNR
COMPILER:	g++ compiler
NOTES:

MODIFICATION HISTORY:
Author			Date		Version
----------------	--------	-------
Version 1		YYYY-MM-DD	x.x Description
Nick Learner		2019-10-17	1.0 Created this file, added class Car implementation
*/

#include "Car.h"

Car::Car(const Car & c): Vehicle(c)
{
	if (this != &c)
	{
		SetThrottle(c.m_throttle);
	}else;
}

void Car::SetThrottle(int throttle): m_throttle(throttle) {}

