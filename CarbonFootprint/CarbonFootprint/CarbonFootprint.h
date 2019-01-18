/*
Using an abstract class with only pure virtual functions, 
you can specify similar behaviors for possibly disparate 
classes. Governments and companies worldwide are becoming 
increasingly concerned with carbon footprints (annual releases 
of carbon dioxide into the atmosphere) from buildings burning 
various types of fuels for heat, vehicles burning fuels for power, 
and the like. Many scientists blame these greenhouse gases for 
the phenomenon called global warming. Create three small classes 
unrelated by inheritance—classes Building, Car and Bicycle. Give 
each class some unique appropriate attributes and behaviors that 
it does not have in common with other classes. 

Write an abstract 
class CarbonFootprint with only a pure virtual getCarbonFootprint 
method. Have each of your classes inherit from that abstract class 
and implement the getCarbonFootprint method to calculate an 
appropriate carbon footprint for that class (check out a few 
websites that explain how to calculate carbon footprints). 

Write an application that creates objects of each of the 
three classes, places pointers to those objects in a vector of
CarbonFootprint pointers, then iterates through the vector,
polymorphically invoking each object’s getCarbonFootprint method.
For each object, print some identifying information and 
the object’s carbon footprint.
*/
#pragma once
#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H
#include <string>

using namespace std;

class CarbonFootprint
{
public:
	const bool accountType = 0;
	// CONSTRUCTOR & DESTRUCTOR
	CarbonFootprint();
	virtual ~CarbonFootprint() = default;

	// VIRTUAL MEMBER FUNCTIONS
	virtual double get_carbonFootprint() const = 0;

	virtual string toString() const = 0; // toString object
};

#endif //CARBONFOOTPRINT_H
