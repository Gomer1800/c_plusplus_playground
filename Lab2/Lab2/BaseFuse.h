#pragma once
#ifndef BASEFUSE_H
#define BASEFUSE_H
#include <string>
#include "windows.h"
#include <iostream>
using namespace std;

class BaseFuse {
public:
	BaseFuse();
	~BaseFuse();
	void extendFuse();
	void printFuse();

protected:
	string startingLength = "[DYNAMITE]";
	string fuse0 = "";
	string fuseLength = startingLength;
};
#endif // !BASEFUSE_H
