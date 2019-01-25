#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	const int numCircles = 4;  //for our circle array subscript
	Circle theCirc[numCircles];  //declare an array of 4 Circle Objects, called theCirc

	//use a loop to initialize the radius of each object
	for (int index = 0; index < numCircles; index++)
	{
		double r;
		cout << "Enter the radius for circle #" << index << ":";
		cin >> r;
		theCirc[index].setRadius(r);  //sets the current index's radius
		//remember the index is the array subscript
	}

	cout << endl;

	//now print out the radius of each circle in the array using a loop
	for (int index = 0; index < numCircles; index++)
	{
		cout << "Circle #" << index << " has a radius of "
			<< theCirc[index].getRadius() << endl;
	}

	system("PAUSE");
	return 0;
}