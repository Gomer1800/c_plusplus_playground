/*
Luis Gomez
CS 135 Mon Night
Hw 6 Lotto Game
*/

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

//GLOBAL CONST ARRAY SIZE VAR
const int SIZE = 7;

//FUNCTION PROTOTYPES
void getLottoPicks(int[], int);
void GenWinNums(int[], int);
bool noDuplicates(int[], int, int);

int main()
{
	bool mainMenu = 1; // Main Menu is ON
	bool nameMenu = 1; // Name Menu is ON
	string userName;

	int userTicket[SIZE] = { 0, 0, 0, 0, 0, 0, 0 };
	int WinningNums[SIZE] = { 0, 0, 0, 0, 0, 0, 0 };

	do
	{
		char mainMenuSelection = 0; //resets main menu selection
		int matchingNums = 0; //resets matching number counter

		cout << "LITTLETON CITY LOTTO MODEL:" << endl;
		cout << "---------------------------" << endl; 
		cout << "1) Play Lotto" << endl;
		cout << "q) Quit Program" << endl;
		cout << "Please make a selection: ";

		

		cin >> mainMenuSelection;

		switch (mainMenuSelection)
		{
		case '1': //PLAY LOTTO
			while (nameMenu == 1)
			{
				cout << "Please enter your name: ";
				cin.ignore();
				getline(cin, userName);
				nameMenu = 0; // Name Menu is now OFF
			} 

			//FUNCTION CALLS
			getLottoPicks(userTicket, SIZE);
			GenWinNums(WinningNums, SIZE);

			for (int e = 0; e < SIZE; e++)
			{
				for (int k = 0; k < SIZE; k++)
				{
					if (userTicket[e] == WinningNums[k])
						matchingNums++;
				}
			}

			cout << "\n" << userName << "'S LOTTO RESULTS" << endl;
			cout << "----------------------" << endl;
			cout << "WINNING TICKET NUMBERS : ";
			for (int i = 0; i < SIZE; i++)
			{
				cout << WinningNums[i] << " ";
			}
			cout << "\n" << userName << "'S TICKET         : ";
			for (int i = 0; i < SIZE; i++)
			{
				cout << userTicket[i] << " ";
			}

			cout << "\n\nRESULTS :" << endl;
			cout << "---------" << endl;
			cout << "Number of Matches: " << matchingNums << endl;
			cout << "Winnings      : ";
			if (matchingNums <= 2)
				cout << "SORRY NOTHING\n" << endl;
			else if (matchingNums == 3)
				cout << "FREE TICKET\n" << endl;
			else if (matchingNums == 4)
				cout << "NOT BAD - $100\n" << endl;
			else if (matchingNums == 5)
				cout << "LUCKY YOU! - $5,000\n" << endl;
			else if (matchingNums == 6)
				cout << "GREAT! - $100,000\n" << endl;
			else if (matchingNums == 7)
				cout << "JACKPOT - 1 MILLION\n" << endl;
			break;

		case 'q': //QUIT PROGRAM
			cout << "You have chosen to quit the program. Thank you for using!" << endl;
			mainMenu = 0; //Main Menu is OFF
			break;

		case 'Q': //QUIT PROGRAM
			cout << "You have chosen to quit the program. Thank you for using!" << endl;
			mainMenu = 0; //Main Menu is OFF
			break;

		default:
			cout << "Invalid selection. Please try again." << endl;
			break;
		}
		

	} while (mainMenu == 1);

	system("PAUSE");
	return 0;
}

void getLottoPicks(int nums[], int size)
{
	int input = 0;
	bool dupCheck; //duplicate trigger

	cout << "Please enter your 7 lotto number picks between 1 and 40." << endl;
	for (int i = 0; i < size; i++)
	{
		dupCheck = 1; //resets duplicate trigger
		cout << "selection #" << (i + 1) << ": ";
		do
		{
			cin >> nums[i];
			if ((nums[i] < 1) || (nums[i] > 40)) // Checks for invalid #s
			{
				cout << "The number must be between 1 and 40. Please try again: ";
			}

			else
			{
				dupCheck = noDuplicates(nums, size, i); //checks for duplicates
				if (dupCheck == 1)
					cout << "You already picked this number. Please enter a different number: ";
			}
		} while (dupCheck == 1);
	}
}

void GenWinNums(int nums[], int size)
{
	bool dupCheck = 1;
	for (int g = 0; g < size; g++)
	{
		do
		{
			nums[g] = rand() % 40 + 1;
			dupCheck = noDuplicates(nums, size, g);
		} while (dupCheck == 1);
	}
}

bool noDuplicates(int value[], int size, int j)
{
	bool duplicate = 0; 
	for (int e = (j-1); e >= 0; e--) // Traverses array backwards checking submitted elements for values identical to element j
	{ 
		if (value[j] == value[e])
			duplicate = 1;
	}

	return duplicate;
}