#pragma once
#pragma once
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"
#include "OvernightPackage.h"
#include <string>
using namespace std;

class OvernightPackage : public Package
{
private:
	double overCost;

public:
	OvernightPackage(const string& = "", const string& = "",
		const string& = "", const string& = "",
		const string& = "",
		const string& = "", const string& = "",
		const string& = "", const string& = "",
		const string& = "",
		double = 0, double = 0, double = 0);

	void setAddCost(double);
	double getAddCost() const;

	double calculateCost() const;

};

#endif
