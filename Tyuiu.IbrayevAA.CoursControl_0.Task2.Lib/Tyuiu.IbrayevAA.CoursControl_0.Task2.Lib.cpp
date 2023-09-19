// Tyuiu.IbrayevAA.CoursControl_0.Task2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "..//../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: This is an example of a library function
class Service :public ISprint0Task8V3
{

	virtual double Proizved(float a, float b, float c)
	{
	
		double  v;
		v = 5 + ((2 * a - c) / (3 + b * b));
		return v;
	}
};
