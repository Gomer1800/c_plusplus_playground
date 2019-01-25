#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

/*******************************************************************************
main
*******************************************************************************/
int main()
{
	//Rectangle box(3.0,4.0); //declare a rectangle object

	Rectangle box2;

	//double boxLength, boxWidth;

	//get box length and width from the user using prompts
	//cout << "This program will calculate the area of a rectangle." << endl;

	//cout << "What is the length of the rectangle?";
	//cin >> boxLength;

	//call the member functions to set the box dimensions, 
	//check to see if the member functions return false to see if data is invalid
	//note if(!box.setLength(boxLength)) is the same as saying if(box.setLength(boxLength) == false)

	/*while (!box.setLength(boxLength))  //if box.setLength returns false PRACTICE THIS!!!!!!!!!!!!!!!!!!!!!!!!
	{
		cout << "\nInvalid box length entered.  Please enter a positive box length\n";
		cout << "What is the length of the rectangle?";
		cin >> boxLength;
	}

	cout << "\nWhat is the width of the rectangle?";
	cin >> boxWidth;

	while (!box.setWidth(boxWidth))
	{
		cout << "\nInvalid box width entered.  Please enter a positive box width\n";
		cout << "What is the width of the rectangle?";
		cin >> boxWidth;
	}*/

	//call box's member functions to get the box information to display\
	
	/*
	cout << "\nHere is the Rectangle's data:\n";
	cout << fixed << setprecision(2);
	cout << "Length: " << box.getLength() << endl;
	cout << "Width:  " << box.getWidth() << endl;
	cout << "Area:   " << box.calcArea() << endl;

	cout << "\nHere is the Rectangle's data:\n";
	cout << fixed << setprecision(2);
	cout << "Length: " << box2.getLength() << endl;
	cout << "Width:  " << box2.getWidth() << endl;
	cout << "Area:   " << box2.calcArea() << endl;
	*/

	cout << box2.getLength() << endl;

	system("PAUSE");
	return 0;
}

