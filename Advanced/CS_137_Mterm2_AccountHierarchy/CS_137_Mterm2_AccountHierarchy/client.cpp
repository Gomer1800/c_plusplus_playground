#include <iostream>
using namespace std;

#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include <vector>
#include <iomanip>
#include <exception>


int main() {
	bool quitMenu1 = 0;
	bool quitMenu2 = 0;
	double amount = 0;

	int userInput = 0;
	int selectAccount = 0;

	Account defaultAccount("Default Account", 0);
	CheckingAccount createChecking("Luis Gomez", 25);
	SavingsAccount createSavings("Edna E Jimenez", 50, 1.3);

	vector<Account *> accounts = { &defaultAccount, &createChecking, &createSavings };
	const Account* accountPtr;

	do {
		quitMenu1 = 0, userInput = 0, selectAccount = 0;
		cout << "\n\nWhich Account would you like to access today? " <<
			"\n1) " << accounts.at(0)->getName() <<
			"\n2) " << accounts.at(1)->getName() <<
			"\n3) " << accounts.at(2)->getName() <<
			"\n4) Quit" << endl;

		cin >> userInput;
		while (!cin) {
			cout << "\nThat was no integer! Please enter an integer: ";
			cin.clear();
			cin.ignore();
			cin >> userInput;
		}
		selectAccount = userInput - 1;

		switch (userInput) {
		case 1:
		case 2:
			do {
				quitMenu2 = 0, amount = 0, userInput = 0;
				accountPtr = accounts.at(selectAccount);
				cout << "\n\n\tAccount Menu" <<
					"\n1) Credit" <<
					"\n2) Debit" <<
					"\n3) Print Statement" <<
					"\n4) Quit" << endl;

				cin >> userInput;
				while (!cin) {
					cout << "\nThat was no integer! Please enter an integer: ";
					cin.clear();
					cin.ignore();
					cin >> userInput;
				}
				

				switch (userInput) {
				case 1: cout << "\nHow much do you want to deposit? ";
					cin >> amount;
					while (!cin) {
						cout << "\nThat was no double! Please enter an double: ";
						cin.clear();
						cin.ignore();
						cin >> amount;
					}
					accounts.at(selectAccount)->credit(amount);
					break;
				case 2: cout << "\nHow much do you want to withdraw? ";
					cin >> amount;
					while (!cin) {
						cout << "\nThat was no double! Please enter an double: ";
						cin.clear();
						cin.ignore();
						cin >> amount;
					}
					accounts.at(selectAccount)->debit(amount);
					break;
				case 3: cout << accountPtr->toString();
					break;
				case 4: quitMenu2 = 1;
					break;
				default:
					break;
				}
			} while (quitMenu2 == 0);
			break;

		case 3:
			do {
				quitMenu2 = 0, amount = 0, userInput = 0;
				accountPtr = accounts.at(selectAccount);
				cout << "\n\n\tSavings Account Menu" <<
					"\n1) Interest Owed this Quarter" <<
					"\n2) Credit" <<
					"\n3) Debit" <<
					"\n4) Print Statement" <<
					"\n5) Quit" << endl;
				cin >> userInput;
				while (!cin) {
					cout << "\nThat was no integer! Please enter an integer: ";
					cin.clear();
					cin.ignore();
					cin >> userInput;
				}

				switch (userInput) {
				case 1: cout << fixed << setprecision(2) << "\nInterest owed this month: "
					<< to_string(createSavings.calculateInterest()) << endl;
					break;
				case 2: cout << "\nHow much do you want to deposit? ";
					cin >> amount;
					while (!cin) {
						cout << "\nThat was no double! Please enter an double: ";
						cin.clear();
						cin.ignore();
						cin >> amount;
					}
					accounts.at(selectAccount)->credit(amount);
					break;
				case 3: cout << "\nHow much do you want to withdraw? ";
					cin >> amount;
					while (!cin) {
						cout << "\nThat was no double! Please enter an double: ";
						cin.clear();
						cin.ignore();
						cin >> amount;
					}
					accounts.at(selectAccount)->debit(amount);
					break;
				case 4: cout << accountPtr->toString();
					break;
				case 5: quitMenu2 = 1;
					break;
				default:
					break;
				}
			} while (quitMenu2 == 0);
			break;
		case 4: quitMenu1 = 1;
			break;
		default:
			break;
		}
	} while (quitMenu1 == 0);
	system("PAUSE");
}