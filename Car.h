/* -------------------------------------------------

FILE:		Car.h
DESCRIPTION:	Car header file for Project 6 for Fall 2019 CS 202-1001 at UNR
COMPILER:	g++ compiler
NOTES:

MODIFICATION HISTORY:
Author			Date		Version
----------------	--------	-------
Version 1		YYYY-MM-DD	x.x Description
Nick Learner		2019-10-17	1.0 Created this file, added class Car declaration
*/

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car
{
	private:
		int m_throttle;
		virtual void serialize(std::ostream & os);
	public:
		Car(): Vehicle(), m_throttle(0) { std::cout << "Car: Default-ctor" << endl; }
		Car(float * lla): Vehicle(lla), m_throttle(0){std::cout << "Car: Parametrized-ctor" << endl;}
		Car(const Car & c);
		virtual ~Car() { std::cout << "Car: Dtor" << endl; }
		void SetThrottle(int throttle);
}

#endif
