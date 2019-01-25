/*
	UML
*******************************************************
	PROGRAM 2 Stats
*******************************************************
	ATTRIBUTES
-dataSet[12]: double
-dataValue: double
-------------------------------------------------------
	MEMBER FUNCTIONS
+Stats(): constructor
+setValue(element: int, data: double): void
+displayValues(): void
+calcTotal(): double
+calcAverage(): double
+calcLargest(): double
+calcSmallest(): double
*/

#ifndef STATS_H
#define STATS_H

class Stats
{
private:
	//const int SIZE = 12;

	double dataSet[12];
	double dataValue;

public:
	Stats();
	void setValue(int, double);
	void displayValues()const;
	double calcTotal()const;
	double calcAverage()const;
	double calcLargest()const;
	double calcSmallest()const;
};
#endif

