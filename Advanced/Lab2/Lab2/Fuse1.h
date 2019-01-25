#pragma once
#ifndef FUSE1_H
#define FUSE1_H
#include "BaseFuse.h"
using namespace std;

class Fuse1:protected BaseFuse {
public:
	Fuse1();
	~Fuse1();

private:
	string length1 = "";
};
#endif // !FUSE1_H
