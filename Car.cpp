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
Nick Learner		2019-10-18	1.1 Finished move() function
*/

#include "Car.h"

Car::Car(float * lla): Vehicle(lla), m_throttle(0)
{
	std::cout << "Car: Parametrized-ctor" << std::endl;
}

Car::Car(const Car & c): Vehicle(c)
{
	SetThrottle(c.m_throttle);
	
	std::cout << "Car: Copy-ctor" << std::endl;
}

const Car & Car::operator=(const Car & c)
{
	std::cout << "Vehicle: Assignment" << std::endl;
	
	return c;
}

void Car::SetThrottle(int throttle)
{
	m_throttle = throttle;
}

void Car::drive(int throttle)
{
	SetThrottle(throttle);
}

void Car::serialize(std::ostream & os)
{
	os << "Car: Throttle: " << GetThrottle() << " @ [" << m_lla[0] << ", " << m_lla[1] << ", " << m_lla[2] << "]" << std::endl;
}

void Car::Move(float * lla)
{
	std::cout << "Car: DRIVE to destination, with throttle @ 75" << std::endl;
	
	drive(75);
	
	SetLLA(lla);
}

