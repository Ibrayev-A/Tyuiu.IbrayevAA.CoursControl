// Tyuiu.IbrayevAA.CoursControl_0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "..//../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: This is an example of a library function
class Service : public ISprint0Task8V0
{

	virtual int Control(int a)
	{
		int(p);
		p = (a / 100) * (a / 10 % 10) * (a % 10);
		return p;
	}

};