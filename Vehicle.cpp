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
	for (int i = 0; i < 3; ++i)
	{
		m_lla[i] = v.m_lla[i];
	}
	
	std::cout << "Vehicle: Copy-ctor" << std::endl;
}

const Vehicle & Vehicle::operator=(const Vehicle & v)
{
	std::cout << "Vehicle: Assignment" << std::endl;
	
	return v;
}

void Vehicle::SetLLA(float * lla)
{
	for (int i = 0; i < 3; i++, lla++)
	{
		m_lla[i] = *lla;
	}
}

void Vehicle::serialize(std::ostream & os)
{
	os << "Vehicle @ [" << m_lla[0] << ", " << m_lla[1] << ", " << m_lla[2] << "]" << std::endl;
}

std::ostream & operator<<(std::ostream & os, Vehicle & v)
{
	v.serialize(os);
	
	return os;
}

