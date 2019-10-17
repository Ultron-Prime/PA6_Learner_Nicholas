/* -------------------------------------------------

FILE:		Vehicle.h
DESCRIPTION:	Vehicle header file for Project 6 for Fall 2019 CS 202-1001 at UNR
COMPILER:	g++ compiler
NOTES:		Based on Vehicle.h in proj5

MODIFICATION HISTORY:
Author			Date		Version
----------------	--------	-------
Version 1		YYYY-MM-DD	x.x Description
Nick Learner		2019-10-17	1.0 Created this file, added class Vehicle declaration
*/

#ifndef VEHICLE_H
#define VEHICLE_H

#include "strprgms.h"

class Vehicle
{
	protected:
		float m_lla[3];
	private:
		virtual void serialize(std::ostream & os);
	public:
		Vehicle() { std::cout << "Vehicle: Default-ctor" << endl; }
		Vehicle(float * lla) { setLLA(lla); std::cout << "Vehicle: Parametrized-ctor" << endl;}
		Vehicle(const Vehicle & v);
		virtual ~Vehicle() { std::cout << "Vehicle: Dtor" << endl; }
		void operator=(const Vehicle & v);
		void SetLLA(float * lla);
		float * GetLLA() { return m_lla; }
		virtual void move(float * lla) = 0;
		friend std::ostream & operator<<(std::ostream & os, const Vehicle & v);
};

#endif
