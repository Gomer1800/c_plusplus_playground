#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally(int a, int b)
	: regVar(a), constVar(b) 
	// constant variables must be declared like above
	// in a member initializer list
{
	regVar = 2; 
	// constVar = 3; doesnt work
}

void Sally::print() {
	cout << "regular var is: " 
		<< regVar << " const variable is: " 
		<< constVar << endl;
}