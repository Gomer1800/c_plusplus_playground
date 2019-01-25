/*
Luis Gomez
CS 135 Mon Night
HW2 Q1

Pseudocode

Display "Welcome to INTERPLANETARY TRAVEL PROGRAM!"\n
Display "This program enables you to find out your travel time to the planet"\n
Display "you want to travel to as well as your weigth on that planet."\n
Display "PLease enjoy the program and find the perfect planet for you!"\n

//Use Switch Case for Menu
Display \n\n"INTERPLANETARY TRAVEL MENU"\n
Display "--------------------------"\n
Display "a) Mecury"\n
Display "b) Venus"\n
Display "c) Earth"\n
Display "d) Mars"\n
Display "e) Jupiter"\n
Display "f) Saturn"\n
Display "g) Uranus"\n
Display "h) Neptune"\n
Display "q) quit"\n

Display" Select a planet to travel to or q to quit the program: "\n
Declare/Ask menuInput

Declare planetChosen //assign value based on menuInput
Declare planetDistance //assign value based on planetChosen

Display "Please enter your weigth (in lbs): "\n
Declare/Ask weightInput
Declare newWeight = weightInput * planetGrav

Display "Please enter the speed (in mile per hour) that you would like to travel at: "\n
Declare/Ask speedInput
Declare travelTimeHours = planetDistance/speedInput
Declare travelTimeDays = (travelTimeHours)*(1/24)
Declare travelTimeYears = (travelTimeDays)*(1/365)

Display \n"INTERPLANETARY TRAVEL: Earth to "planetChosen \n
Display "--------------------------------------------------"\n
Display "Your weigth on "planetChosen":      "newWeight \n

Display \n"Your travel time to "planetChosen":"\n
Format & Display "In Hours: "travelTimeHours" hours"\n
Format & Display "In Days : "travelTimeDays" days"\n
Format & Display "In Years : "travelTimeYears" years"\n

*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	bool menuFlag = 1;
	bool quitFlag = 0;
	bool weightFlag = 1;
	bool speedFlag = 1;
	char menuInput;
	string chosenPlanet;
	double planetDistance = 0.0;
	double planetGrav = 0.0;
	double weightInput = 0.0;
	double newWeight = 0.0;
	double speedInput = 0.0;
	double travelTimeHours = 0.0;
	double travelTimeDays = 0.0;
	double travelTimeYears = 0.0;

	cout << "Welcome to INTERPLANETARY TRAVEL PROGRAM!" << endl;
	cout << "This program enables you to find out your travel time to the planet" << endl;
	cout << "you want to travel to as well as your weight on that planet." << endl;
	cout << "Please enjoy the program and find the perfect planet for you!" << endl;

	cout << "\n\nINTERPLANETARY TRAVEL MENU" << endl;
	cout << "--------------------------" << endl;
	cout << "a) Mercury" << endl;
	cout << "b) Venus" << endl;
	cout << "c) Earth" << endl;
	cout << "d) Mars" << endl;
	cout << "e) Jupiter" << endl;
	cout << "f) Saturn" << endl;
	cout << "g) Uranus" << endl;
	cout << "h) Neptune" << endl;
	cout << "q) quit" << endl;

	cout << "\nSelect a planet to travel to or q to quit the program: " << endl;
	while (menuFlag == 1)
	{
		cin >> menuInput;
		switch (menuInput)
		{
			case 'a':
				chosenPlanet = "Mercury";
				planetDistance = abs(93E6-36E6);
				planetGrav = .27;
				menuFlag = 0;
				break;
			case 'b':
				chosenPlanet = "Venus";
				planetDistance = abs(93E6 - 67E6);
				planetGrav = .86;
				menuFlag = 0;
				break;
			case 'c':
				chosenPlanet = "Earth";
				planetDistance = abs(93E6 - 93E6);
				planetGrav = 1.00;
				menuFlag = 0;
				break;
			case 'd':
				chosenPlanet = "Mars";
				planetDistance = abs(93E6 - 141E6);
				planetGrav = .37;
				menuFlag = 0;
				break;
			case 'e':
				chosenPlanet = "Jupiter";
				planetDistance = abs(93E6 - 483E6);
				planetGrav = 2.64;
				menuFlag = 0;
				break;
			case 'f':
				chosenPlanet = "Saturn";
				planetDistance = abs(93E6 - 886E6);
				planetGrav = 1.17;
				menuFlag = 0;
				break;
			case 'g':
				chosenPlanet = "Uranus";
				planetDistance = abs(93E6 - 1782E6);
				planetGrav = .92;
				menuFlag = 0;
				break;
			case 'h':
				chosenPlanet = "Neptune";
				planetDistance = abs(93E6 - 2793E6);
				planetGrav = 1.44;
				menuFlag = 0;
				break;
			case 'q':
				cout << "You have chosen to quit the program. Thank you for using the program!" << endl;
				quitFlag = 1;
				menuFlag = 0;
				break;
			default:
				cout << "You have entered an invalid selection." << endl;
				quitFlag = 1;
				menuFlag = 0;
				break;
		}
	}

	if (quitFlag == 0)
	{
		cout << "Please enter your weight (in lbs): " << endl;
		while (weightFlag == 1)
		{
			cin >> weightInput;
			if (weightInput > 0)
			{
				newWeight = weightInput * planetGrav;
				weightFlag = 0;
			}
		}

		cout << "Please enter the speed (in mile per hour) that you would like to travel at: " << endl;
		while (speedFlag == 1)
		{
			cin >> speedInput;
			if (speedInput > 0)
			{
				travelTimeHours = planetDistance / speedInput;
				travelTimeDays = travelTimeHours / 24;
				travelTimeYears = travelTimeDays / 365;
				speedFlag = 0;
			}
		}

		cout << "\nINTERPLANETARY TRAVEL:  Earth to " << chosenPlanet << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "Your weight on " << chosenPlanet << ":      " << fixed << setprecision(2) << newWeight << " lbs" << endl;
		cout << "\nYour travel time to " << chosenPlanet << ":" << endl;
		cout << "    In Hours: " << fixed << setprecision(0) << travelTimeHours << " hours" << endl;
		cout << "    In Days : " << travelTimeDays << " days" << endl;
		cout << "    In Years : " << fixed << setprecision(2) << travelTimeYears << " years\n" << endl;
	}

	system("PAUSE");
	return 0;
}