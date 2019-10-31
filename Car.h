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
Nick Learner		2018-10-18	1.1 Finished adding function prototypes
*/

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car: public Vehicle
{
	private:
		int m_throttle;
		virtual void serialize(std::ostream & os);
	public:
		Car(): Vehicle(), m_throttle(0) { std::cout << "Car: Default-ctor" << std::endl; }
		Car(float * lla);
		Car(const Car & c);
		virtual ~Car() { std::cout << "Car: Dtor" << std::endl; }
		const Car & operator=(const Car & c);
		void SetThrottle(int throttle);
		const int GetThrottle() const { return m_throttle; }
		void drive(int throttle);
		virtual void Move(float * lla);
};

#endif
