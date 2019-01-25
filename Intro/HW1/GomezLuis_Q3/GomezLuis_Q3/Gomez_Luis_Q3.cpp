/*
Luis Gomez
CS 135 Mon Nights
Q3

pseudocode:

Display "Welcome to Lost Fortune!"

Display "Please enter the following questions for your personalized adventure:"

Display "Enter the number of Explorers: "
Ask for numExp
Display "Enter the number of Explorers Lost in Battle: " 
Ask numDead

Display "You bravely led "numExp" on a quest for gold."
Display "The group fought a band of ogres and lost "numDead" members."
Display "Only "numSurvivors = (numExp-numDead)" survived."

Display "The party was about to give up when they stumbled upon the"
Display "buried fortune of 750 gold pieces. The group split the loot evenly"
Display "and as the quest leader you kept the extra "(750 % numSurvivors)" gold pieces."
*/

#include <iostream>
using namespace std;

int main()
{
	signed int numExp = 0;
	signed int numDead = 0;
	bool flag = 1;
	bool flag2 = 1;

	cout << "Welcome to Lost Fortune!\n";
	cout << "\nPlease enter the following questions for your personalized adventure: \n";
	cout << "\nEnter the number of Explorers: \n";
	while (flag == 1) //INPUT & VALIDATION
	{
		cin >> numExp;
		if (numExp > 0)
		{
			flag = 0;
		}
	}
	cout << "Enter the number of Explorers Lost in Battle: \n";
	while (flag2 == 1) //INPUT & VALIDATION
	{
		cin >> numDead;
		if (numDead >= 0)
		{
			if (numDead <= numExp)
			{
				flag2 = 0;
			}
		}
	}
	signed int numSurvivors = numExp - numDead; // CALCULATE SURVIVORS USING USER INPUT

	cout << "\nYou bravely led " << numExp << " adventurers on a quest for gold.\n";
	cout << "The group fought a band of ogres and lost " << numDead << " members.\n";
	cout << "Only " << numSurvivors << " survived.\n";

	cout << "\nThe party was about to give up when they stumbled upon the\n";
	cout << "buried fortune of 750 gold pieces. The group split the loot evenly\n";
	short int fatLoot = 750 % numSurvivors; //CALCULTE LEADER BONUS
	cout << "and as the qeust leader you kept the extra " << fatLoot << " gold pieces.\n\n"; //FORCED MISPELLING OF QUEST FOR HYPERGRADE

	//system("PAUSE");
	return 0;

}