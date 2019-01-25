/* 
Luis Gomez
CS 135 Mon Nights
Q6

pseudocode:

Display "Please enter a character: "
Ask inputChar

Declare convertChar = (short int)inputChar

Display "The ASCII code for the character "inputChar" is "convertChar
*/

#include <iostream>
using namespace std;

int main()
{
	char inputChar;
	short int convertChar;
	bool flag = 1; //INPUT VALIDATION TRIGGER

	cout << "Please enter a character: " << endl;
	while (flag == 1) //INPUT & VALIDATION
	{
		cin >> inputChar;
		if ((inputChar>=0) && (inputChar<=127)) //TESTING ASCII RANGE [0-127]
		{
			convertChar = (short int)inputChar; //short int uses less memory and valid inputs are within short int range
			flag = 0;
		}
	}

	cout << "The ASCII code for the character " << inputChar << " is " << convertChar << endl;
	//system("PAUSE");
	return 0;
}