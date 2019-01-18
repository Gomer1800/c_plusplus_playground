#pragma once
#ifndef BICYCLE_H
#define BICYCLE_H

#include "CarbonFootprint.h"
#include <string>
using namespace std;

class Bicycle : public CarbonFootprint
{
private:
	string type;

public:
	const bool accountType = 0;
	// CONSTRUCTOR & DESTRUCTOR
	Bicycle(const string& = "");

	void setName(const string&);
	const string& getName() const;

	virtual ~Bicycle() = default;
	virtual double get_carbonFootprint() const override;
	
	virtual string toString() const override; // toString object      
};

#endif //BICYCLE_H