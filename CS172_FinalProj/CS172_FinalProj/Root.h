#ifndef Root_H
#define Root_H
#include <iostream>
using namespace std;

class Root{
private:
	int a;

public:
	Root(int new_a);

	int getA();
	double getRoot();
};
#endif