#include "Quadratic.h"
#include <iostream>
#include <cmath>
using namespace std;


Quadratic::Quadratic(double new_a, double new_b, double new_c)
{
	a = new_a;
	b = new_b;
	c = new_c;
}

double Quadratic::getA()
{
	return a;
}

double Quadratic::getB()
{
	return b;
}

double Quadratic::getC()
{
	return c;
}

double Quadratic::getDiscriminant()
{
	return b * b - 4 * a * c;
}

double Quadratic::getRoot1()
{
	if (getDiscriminant() < 0)
		return 0;
	else
	{
		return (-b + sqrt(getDiscriminant())) / (2 * a);
	}
}

double Quadratic::getRoot2()
{
	if (getDiscriminant() < 0)
		return 0;
	else
	{
		return (-b - sqrt(getDiscriminant())) / (2 * a);
	}
}