#include <iostream>
#include "GrandMother.h"
#include "Daughter.h"
#include "Mother.h"
using namespace std;

//Tutorial 53 
/*
Daughter::Daughter()
{
}

void Daughter::sayName() {
	Mother::sayName();
	cout << "TINA!" << endl;
} */

//Tutorial 54
/*
void Daughter::doSomething() {
	publicV = 1;
	cout << publicV << endl;
	protectedV = 2;
	cout << protectedV << endl;
}*/

//Tutorial 55
Daughter::Daughter() {
	cout << "Daughter Constructor" << endl;
}

Daughter::~Daughter() {
	cout << "Daughter Destructor!" << endl;
}