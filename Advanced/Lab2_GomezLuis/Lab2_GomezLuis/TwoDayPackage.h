#pragma once
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"
#include <string>
using namespace std;

class TwoDayPackage : public Package
{
private:
	double cost;

public:
	TwoDayPackage(const string& = "", const string& = "",
		const string& = "", const string& = "",
		const string& = "",
		const string& = "", const string& = "",
		const string& = "", const string& = "",
		const string& = "",
		double = 0, double = 0, double = 0);

	void setCost(double);
	double getCost() const;

	double calculateCost() const;
};

#endif
