#pragma once
#include <iostream>
#include "Mother.h"
#include "GrandMother.h"

#ifndef DAUGHTER_H
using namespace std;


//Daughter will inherit public member functions/vars from mother, NOT CONST
// Tutorial 53
/*
class Daughter:public Mother{ 
public:
	Daughter();
	void sayName();
};*/

//Tutorial 54
/*
class Daughter : public Mother {
public:
	void doSomething();
};*/

//Tutorial 55
class Daughter : public Mother {
public:
	Daughter();
	~Daughter();
};
#endif // !DAUGHTER_H

