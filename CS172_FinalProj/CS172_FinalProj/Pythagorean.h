#ifndef Pythagorean_H
#define Pythagorean_H
#include <iostream>
using namespace std;

class Pythagorean{
private:
	int a;
	int b;
	int c;

public:
	Pythagorean(int new_a, int new_b);

	int getA();
	int getB();
	double getHypotenuse();

};
#endif