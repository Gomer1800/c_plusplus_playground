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

	virtual ~TwoDayPackage() = default;

	void setCost(double);
	double getCost() const;

	virtual double calculateCost() const override;
	virtual string toString() const override; // string representation
};

#endif
