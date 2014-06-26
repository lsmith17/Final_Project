#ifndef Quadratic_H
#define Quadratic_H
#include <iostream>
using namespace std;

class Quadratic{
private:
	int a;
	int b;
	int c;

public:
	Quadratic(double new_a, double new_b, double new_c);

	double getA();
	double getB();
	double getC();
	double getDiscriminant();
	double getRoot1();
	double getRoot2();

};
#endif