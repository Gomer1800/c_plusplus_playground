#pragma once
#include <iostream>
#include "GrandMother.h"
#ifndef MOTHER_H

/* Tutorial 53
class Mother
{
public:
	Mother();
	void sayName();
};*/

//Tutorial 54
/*
class Mother {
public: //anybody has access to this
	int publicV;

protected: // any friend/derived class has access to this
	int protectedV;
private: // only the base class has access to this
	int privateV;
};*/

//Tutorial 55
class Mother :public GrandMother{
public:
	Mother();
	~Mother();
};
#endif // !MOTHER_H 
