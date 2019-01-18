#pragma once
#ifndef BUILDING_H
#define BUILDING_H

#include "CarbonFootprint.h"
#include <string>
using namespace std;

class Building : public CarbonFootprint
{
private:
	string buildingType;

public:
	const bool accountType = 0;
	// CONSTRUCTOR & DESTRUCTOR
	Building(const string& = "");

	void setName(const string&);
	const string& getName() const;

	virtual ~Building() = default;
	virtual double get_carbonFootprint() const override;

	virtual string toString() const override; // toString object  
};

#endif //BUILDING_H