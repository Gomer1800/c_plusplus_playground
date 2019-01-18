/*
Luis Gomez
CS 135 Mon Night
HW 5 Q1
*/

#include <iostream>
#include <string>
using namespace std;

//VALUE RETURNING FUNCTION PROTOTYPES
int countWords(string);
int consonantCount(string);

int main()
{
	string userInput = "";
	char menuSelect = '0';
	bool quitMenu = 0;
	char stringElement = '0';

	cout << "Please enter a word, a sentence, or a string of numbers." << endl;

	getline(cin, userInput);

	do{
		int revPos = 0; // <- USED FOR REVERSE STRING
		string reversedInput = userInput; // <- USED FOR REVERSE STRING

		cout << "\nUSE THIS MENU TO MANIPULATE YOUR STRING" << endl;
		cout << "---------------------------------------" << endl;
		cout << "1) Inverse String" << endl;
		cout << "2) Reverse String" << endl;
		cout << "3) To Uppercase" << endl;
		cout << "4) Count Number Words" << endl;
		cout << "5) Count Consonants" << endl;
		cout << "6) Enter a Different String" << endl;
		cout << "7) Print the string" << endl;
		cout << "Q) Quit" << endl;

		cin >> menuSelect;
		cin.ignore(); //CLEARS KEYBOARD BUFFER

		switch (menuSelect)
		{
			  case '1':
				  for(unsigned int pos = 0; pos < userInput.length(); pos++)
				  {
					  stringElement = userInput[pos];

					  if (stringElement >= 'A' && stringElement <= 'Z')
					  {
						  userInput[pos] = tolower(stringElement);
					  }
					  else if (stringElement >= 'a' && stringElement <= 'z')
					  {
						  userInput[pos] = toupper(stringElement);
					  }
				  }
				  break;

			  case '2':
				  while (revPos < (userInput.length() - 1))
				  {
					  for (int pos = (userInput.length() - 1); pos >= 0; pos--)
					  {
						  reversedInput[revPos] = userInput[pos];
						  revPos++;
					  }
				  }
				  for (unsigned int pos = 0; pos < userInput.length(); pos++)
				  {
					  userInput[pos] = reversedInput[pos];
				  }
				  break;

			  case '3':
				  for (unsigned int pos = 0; pos < userInput.length(); pos++)
				  {
					  stringElement = userInput[pos];

					  if (stringElement >= 'a' && stringElement <= 'z')
					  {
						  userInput[pos] = toupper(stringElement);
					  }
				  }
				  break;

			  case '4':
				  cout << "\nThe string \"" << userInput << "\" has " << countWords(userInput)<<" word(s)"<<endl;
				  break;

			  case '5':
				  cout << "\nThe number of consonants in the string is " << consonantCount(userInput) << "." << endl;
				  break;

			  case '6':
				  cout << "\nEnter a different string : " << endl;
				  getline(cin, userInput);
				  break;

			  case '7':
				  cout << "\nThe current string is: " << userInput << endl;
				  break;

			  case 'Q':
				  cout << "\nYou have chosen to quit the program. Thank you!" << endl;
				  quitMenu = 1;
				  break;
			  case 'q':
				  cout << "\nYou have chosen to quit the program. Thank you!" << endl;
				  quitMenu = 1;
				  break;
			  default:
				  cout << "\nInvalid selection. Please try again." << endl;
				  break;
		}
	  } while (quitMenu == 0);
	  
	system("PAUSE");
	return 0;
}

int countWords(string userInput)
{
	int wordCount = 0;
	bool wordCursor = 0;
	char stringElement = '0';

	for (unsigned int pos = 0; pos < userInput.length(); pos++)
	{
		stringElement = userInput[pos];

		if (((stringElement >= 'a' && stringElement <= 'z') || (stringElement >= 'A' && stringElement <= 'Z')) && wordCursor == 0)
		{
			wordCursor = 1;
			wordCount++;
		}
		else if (((stringElement < 'a' || stringElement > 'z') && (stringElement < 'A' || stringElement > 'Z')) && wordCursor == 1)
		{
			wordCursor = 0;
		}
	}

	return wordCount;
}

int consonantCount(string userInput)
{
	int conCount = 0;
	char stringElement = '0';

	for (unsigned int pos = 0; pos < userInput.length(); pos++)
	{
		stringElement = userInput[pos];

		if ((stringElement >= 'a' && stringElement <= 'z') || (stringElement >= 'A' && stringElement <= 'Z'))
		{
			if ((stringElement != 'A') && (stringElement != 'a') && (stringElement != 'E') && (stringElement != 'e') && (stringElement != 'I') && (stringElement != 'i') && (stringElement != 'O') && (stringElement != 'o') && (stringElement != 'U') && (stringElement != 'u'))
			{
				conCount++;
			}
		}
	}

	return conCount;
}