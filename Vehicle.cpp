/* -------------------------------------------------

FILE:		Vehicle.cpp
DESCRIPTION:	Vehicle.cpp file for Project 6 for Fall 2019 CS 202-1001 at UNR
COMPILER:	g++ compiler
NOTES:

MODIFICATION HISTORY:
Author			Date		Version
----------------	--------	-------
Version 1		YYYY-MM-DD	x.x Description
Nick Learner		2019-10-17	1.0 Created this file, added class Vehicle implementation
*/

#include "Vehicle.h"

Vehicle::Vehicle(const Vehicle & v)
{
	int * llaptr = v.GetLLA();
	
	if (this != &v)
	{
		setLLA(llaptr);
	}else;
}

void Vehicle::operator=(const Vehicle & v)
{
	int * llaptr = v.GetLLA();
	
	if (this != &v)
	{
		setLLA(llaptr);
	}else;
	
	std::cout << "Vehicle: Assignment" << endl;
}

void Vehicle::SetLLA(float * lla)
{
	for (int i = 0; i < 3; i++, lla++)
	{
		m_lla[i] = *lla;
	}
}

std::ostream & operator<<(std::ostream & os, const Vehicle & v)
{
	serialize(os);
	
	return os;
}

virtual void serialize(std::ostream & os)
{
	os << "Vehicle @ [" << m_lla[0] << ", " << m_lla[1] << ", " << m_lla[2] << "]" << endl;
}

