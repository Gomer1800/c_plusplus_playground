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

#include "Stats.h"
#include <iostream>
using namespace std;

/****************************************************************
CONSTRUCTOR
*****************************************************************/
Stats::Stats()
{
	for (int i = 0; i < 12; i++)
	{
		dataSet[i] = 0.0;
	}
}
/****************************************************************
SET FUNCTION
*****************************************************************/
void Stats::setValue(int element, double data)
{
	if (element < 0)
		element = 0;
	if (data < 0)
		data = 0;
	dataSet[element] = data;
}
/****************************************************************
ADDITIONAL MEMBER FUNCTIONS
*****************************************************************/
void Stats::displayValues()const
{
	cout << "Data Set:";

	for (int i = 0; i < 12; i++)
	{
		cout << " " << dataSet[i];
	}

	cout << endl;
}

double Stats::calcTotal()const
{
	double total = 0;

	for (int i = 0; i < 12; i++)
	{
		total += dataSet[i];
	}

	return total;
}

double Stats::calcAverage()const
{
	double average = (calcTotal()) / 12;

	return average;
}

double Stats::calcLargest()const
{
	double largest = 0;

	for (int i = 0; i < 12; i++)
	{
		if (dataSet[i] > largest)
		{
			largest = dataSet[i];
		}
	}

	return largest;
}

double Stats::calcSmallest()const
{
	double smallest = calcLargest();

	for (int i = 0; i < 12; i++)
	{
		if (dataSet[i] < smallest)
		{
			smallest = dataSet[i];
		}
	}

	return smallest;
}