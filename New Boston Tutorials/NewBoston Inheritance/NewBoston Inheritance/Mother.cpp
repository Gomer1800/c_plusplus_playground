#include <iostream>
#include "Mother.h"
#include "GrandMother.h"
using namespace std;

// Tutorial 53
/*
Mother::Mother() {

}

void Mother :: sayName() {
	cout << " I am ";
}*/

//Tutorial 54 , nothing needed

Mother::Mother()
{
	cout << "Mother Constructor!" << endl;
}

Mother::~Mother() {
	cout << "Mother Destructor!" << endl;
}