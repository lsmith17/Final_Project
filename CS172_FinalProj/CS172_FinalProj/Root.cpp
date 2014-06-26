#include "Root.h"
#include <iostream>
#include <cmath>
using namespace std;

Root::Root(int new_a){
	a = new_a;
}

int Root::getA(){
	return a;
}

double Root::getRoot(){
	return sqrt(a);
}