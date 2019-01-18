/*
Luis Gomez
CS 135 Mon Nights
Q4

pseudocode:

Display "Please enter the length of one of the sides of the base: \n"
Ask baseLength
Display "PLease enter the height of the pyramid: \n"
Ask height
Declare baseArea = baseLength * baseLength
Display "\n\nThe area of the base of the pyramid is: "baseArea"\n"
Display "The height of the pyramid is: "height"\n"
volume = area * height/3
Display "The volume of the pyramid is: "volume(rounded to 2 dec places)"\n"
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double baseLength = 0;
	double height = 0;
	bool flag1 = 1, flag2 = 1; //INPUT VALIDATION TRIGGERS

	cout << "Please enter the length of one of the sides of the base: \n";
	while (flag1 == 1) // INPUT & VALIDATION
	{
		cin >> baseLength;
		if (baseLength > 0)
		{
			flag1 = 0;
		}

	}
	cout << "Please enter the height of the pyramid: \n";
	while (flag2 == 1) //INPUT & VALIDATION
	{
		cin >> height;
		if (height > 0)
		{
			flag2 = 0;
		}

	}
	// AREA & VOLUME CALC
	double area = baseLength * baseLength;
	double volume = area * height / 3.0;

	cout << "\n\nThe area of the base of the pyramid is: " << fixed << setprecision(2) << area << endl;
	cout << "The height of the pyramid is: " << fixed << setprecision(2) << height << endl;
	cout << "The volume of the pyramid is: " << fixed << setprecision(2) << volume << endl;

	//system("PAUSE");
	return 0;
}