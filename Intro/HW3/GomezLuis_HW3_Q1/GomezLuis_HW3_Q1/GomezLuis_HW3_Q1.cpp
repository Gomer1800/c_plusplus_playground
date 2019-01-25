/*
Luis Gomez
CS 135 Mon Night
HW3 Q1
DICE ROLLING SIMULATOR
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

bool flag1 = 1; //Used for Input Validation
int rollNum;
unsigned int currentRoll = 0;
unsigned int count1, count2, count3, count4, count5, count6;

int main()
{
	srand ((unsigned int)time(NULL));

	cout << "How many times would you like to roll the dice?" << endl;
	while (flag1 == 1) //INPUT VALIDATION LOOP
	{
		cin >> rollNum;
		if (rollNum > 0)
			flag1 = 0;
		else
		{
			cout << "This is an invalid number. " << endl;
			cout << "The number of rolls should be equal to or greater than 1." << endl;
			cout << "Please enter again." << endl;
		}
			
	}

	for (unsigned int rollCount = 0; rollCount < rollNum; rollCount++) //DICE SIMULATION
	{
		currentRoll = rand() % 6 + 1; //GENERATES AN INT 1-6 & INCREMENTS COUNTS FOR POSSIBLE OUTCOMES
		switch (currentRoll)
		{
		case 1:
			++count1;
			break;
		case 2:
			++count2;
			break;
		case 3:
			++count3;
			break;
		case 4:
			++count4;
			break;
		case 5:
			++count5;
			break;
		case 6:
			++count6;
			break;
		}
	}

	cout << "\nDICE ROLL STATISTICS" << endl;
	cout << "\n# Rolled\t# Times \t% Times" << endl;
	cout << "--------\t--------\t--------" << endl;
	cout << "      1 \t       " << count1 << " \t" << setw(7) << fixed << setprecision(2) << ((double)count1/rollNum)*100 << "%" << endl;
	cout << "      2 \t       " << count2 << " \t" << setw(7) << fixed << ((double)count2 / rollNum) * 100 << "%" << endl;
	cout << "      3 \t       " << count2 << " \t" << setw(7) << fixed << ((double)count3 / rollNum) * 100 << "%" << endl;
	cout << "      4 \t       " << count2 << " \t" << setw(7) << fixed << ((double)count4 / rollNum) * 100 << "%" << endl;
	cout << "      5 \t       " << count2 << " \t" << setw(7) << fixed << ((double)count5 / rollNum) * 100 << "%" << endl;
	cout << "      6 \t       " << count2 << " \t" << setw(7) << fixed << ((double)count6 / rollNum) * 100 << "%" << endl;

	//system("PAUSE");
	return 0;
}