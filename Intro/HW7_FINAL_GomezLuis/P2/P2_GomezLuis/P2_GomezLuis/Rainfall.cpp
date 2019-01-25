/*
Luis Gomez
CS 135 Mon Night
HW7 P3

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

#include <iostream>
#include <iomanip>
#include "Stats.h"
using namespace std;

int main()
{
	Stats rainfall;
	for (int i = 0; i < 12; i++) //Traverse dataSet[12] and ask user for values
	{
		double userInput; 
		cout << "What is the amount of rainfall, in meters, of element [" << (i+1) << "]: ";
		cin >> userInput;

		rainfall.setValue(i,userInput);
	}
	//Print rainfall report
	cout << "\n	ANNUAL RAINFALL REPORT	" << endl;
	cout << "-----------------------------------" << endl;
	cout << "TOTAL RAINFALL:\t\t" << rainfall.calcTotal() << " m" << endl;
	cout << "AVERAGE RAINFALL:\t" << rainfall.calcAverage() << " m" << endl;
	cout << "LOWEST RAINFALL LEVEL:\t" << rainfall.calcSmallest() << " m" << endl;
	cout << "HIGHEST RAINFALL LEVEL:\t" << rainfall.calcLargest() << " m" << endl;
	cout << endl;
	system("PAUSE");
	return 0;
}