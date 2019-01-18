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

	virtual ~OvernightPackage() = default;

	void setAddCost(double);
	double getAddCost() const;

	virtual double calculateCost() const override;
	virtual string toString() const override; // string representation
};

#endif
