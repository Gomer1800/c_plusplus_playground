#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally()
{
}

Sally::Sally(int a) {
	num = a;
}

//Overloaded Operator
Sally Sally::operator+(Sally aso) {
	Sally brandNew;
	brandNew.num = num + aso.num;
	return brandNew;
}