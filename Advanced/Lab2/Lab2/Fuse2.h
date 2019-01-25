#pragma once
#ifndef FUSE2_H
#define FUSE2_H
#include "BaseFuse.h"
#include "fuse1.h"
using namespace std;

class Fuse2 :protected Fuse1 {
public:
	Fuse2();
	~Fuse2();

private:
	string length2 = "";
};
#endif // !Fuse2_H
