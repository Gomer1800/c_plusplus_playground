/*
Luis Gomez
CS 135 Mon Night
HW3 Q2
MULTIPLICATION TABLE GENERATOR
*/

#include <iostream>
#include <iomanip>
using namespace std;

bool menuFlag1 = 1, menuFlag2 = 1;
char mainMenuSelect;
int numSelect = 0;

int main()
{
	while (menuFlag1 == 1)
	{
		//MAIN MENU
		cout << "MENU" << endl;
		cout << "a) Generate Multiplication Table" << endl;
		cout << "q) Quit the program" << endl;
		cout << "Please make a selection: ";

		cin >> mainMenuSelect;
		switch (mainMenuSelect)
		{
		case 'a': //CONSTRUCT MULT TABLE
			cout << "Please enter a number for your multiplication table: \n" << endl;
			while (menuFlag2 == 1)
			{
				cin >> numSelect;
				if (numSelect >= 1 && numSelect <= 10)
					menuFlag2 = 0;
			}

			cout << "MULTIPLICATION TABLE: " << numSelect << "'s\n" << endl;
			//TABLE SETUP, NO MATH INVOLVED
			for (int setUp = 1; setUp <= numSelect; ++setUp)
			{
				if (setUp == 1)
					cout << "  " << setw(3) << setUp << "  ";
				else if (setUp!=numSelect)
					cout << setw(3) << setUp << "  ";
				if (setUp == numSelect)
					cout << setw(3) << setUp << endl;
			}
			for (int setUp2 = 1; setUp2 <= numSelect; ++setUp2)
			{
				if (setUp2 == 1)
					cout << setw(8) << "----|";
				else
					cout << "----|";

				if (setUp2 == numSelect)
					cout << endl;
			}
			//MULTIPLICATION
			for (int row = 1; row <= numSelect; ++row)
			{
				cout << setw(2) << row << "|";
				for (int column = 1; column <= numSelect; ++column)
				{
					cout << setw(4) << row*column<< "|";
					if (column == numSelect)
						cout << endl;
				}
				cout << " -|";
				for (int setUp3 = 1; setUp3 <= numSelect; ++setUp3)
				{
					cout << "----|";
					if (setUp3 == numSelect)
						cout << endl;
				}
			}
			cout << endl; //TABLE COMPLETED, RETURN TO MAIN MENU
			menuFlag2 = 1; //RESETS NUMBER SELECTION
			break;

		case 'q': //QUIT
			cout << "You have chosen to quit the program. Thank you for using!" << endl;
			menuFlag1 = 0;
			break;

		default: //INPUT VALIDATION
			cout << "Invalid Selection\n" << endl;
			break;
		}
	}
	
	system("PAUSE");
	return 0;
}