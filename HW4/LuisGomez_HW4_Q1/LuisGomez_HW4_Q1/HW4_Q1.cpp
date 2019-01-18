/*
Luis Gomez
CS 135 Mon Night
HW4 Q1
*/

#include <iomanip>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

//FUNCTION PROTOTYPES
string assignWeapon(int);
string matchResult(int, int);


int main()
{
	bool mainMenu = 1, inputValid = 0;
	char mainMenuInput;
	int compChoice, playerChoice;

	int getComputerChoice();
	int getPlayerChoice();
	srand((unsigned int)time(NULL));

	while (mainMenu == 1)
	{
		cout << "\nROCK PAPER SCISSORS MENU" << endl;
		cout << "-------------------------" << endl;
		cout << "p) Play Game" << endl;
		cout << "q) Quit" << endl;
		cout << "Please enter your choice : " << endl;
		cin >> mainMenuInput;
		switch (mainMenuInput)
		{
			case 'p':
				compChoice = getComputerChoice(); // GENERATES COMPUTER CHOICE
				playerChoice = getPlayerChoice(); //PROMPTS USER TO CHOOSE A WEAPON
				cout << "You chose : " << assignWeapon(playerChoice) << endl;
				cout << "The computer chose : " << assignWeapon(compChoice) << endl;
				cout << matchResult(playerChoice, compChoice) << endl; //COMPARES COMP/USER CHOICES AND COMPUTES RESULT
				break;

			case 'q':
				cout << "You have chosen to quit the program. Thank you for using the program!" << endl;
				mainMenu = 0;
				break;

			default:
				cout << "Invalid selectrion. Try again.\n" << endl;
				break;
		}
	}
	system("PAUSE");
	return 0;
}


int getComputerChoice() //RANDOMLY GENERATES COMPUTER CHOICE AS AN IN VALUE 1-3
{
	int value = rand() % 3 + 1;
	return value;
}

int getPlayerChoice() //PROMPTS USER TO SELECT A WEAPON USING INT INPUTS
{
	bool playerChoiceMenu = 1;
	int choice = 0;

	cout << "\nRock, Paper, or Scissors?" << endl;
	cout << "1) Rock" << endl;
	cout << "2) Paper" << endl;
	cout << "3) Scissors" << endl;
	cout << "Please enter your choice : \n" << endl;

	while (playerChoiceMenu == 1)
	{
		cin >> choice;
		if (choice >= 1 && choice <= 3)
			playerChoiceMenu = 0;
	}

	return choice;
}

string assignWeapon(int input) //ACCEPTS INT VALUE AND ASSIGNS A WEAPON
{
	string weapon;
	switch (input)
	{
	case 1:
		weapon = "Rock";
		break;
	case 2:
		weapon = "Paper";
		break;
	case 3:
		weapon = "Scissors";
		break;
	}
	return weapon;
}


string matchResult(int player, int comp) //COMPARES INT VALUES FOR COMP/USER CHOICE AND GENERATES MATCH RESULT
{
	string result;
	if (player == comp)
	{
		result = "\nIt's a TIE!";
		return result;
	}
	else if ((player == 1 && comp == 2)||(player == 2 && comp == 3)||(player == 3 && comp == 1))
	{
		result = "\nSorry you LOSE.";
		return result;
	}
	else if ((player == 1 && comp == 3) || (player == 2 && comp == 1) || (player == 3 && comp == 2))
	{
		result = "\nYou WIN!";
		return result;
	}
	else
	{
		result = "\nERROR";
		return result;
	}
}
