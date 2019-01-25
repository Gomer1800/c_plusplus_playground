#pragma once
#ifndef CAR_H
#define CAR_H

#include "CarbonFootprint.h"
#include <string>
using namespace std;

class Car : public CarbonFootprint
{
private:
	string modelName;

public:
	const bool accountType = 0;
	// CONSTRUCTOR & DESTRUCTOR
	Car(const string& = "");

	void setName(const string&);
	const string& getName() const;

	virtual ~Car() = default;
	virtual double get_carbonFootprint() const override;

	virtual string toString() const override; // toString object  
};

#endif //CAR_H