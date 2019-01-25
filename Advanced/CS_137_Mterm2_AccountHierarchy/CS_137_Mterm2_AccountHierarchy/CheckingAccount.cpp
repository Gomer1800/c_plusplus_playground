#include "Account.h"
#include "CheckingAccount.h"
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

CheckingAccount::CheckingAccount(const string& account_holder_name, double initialBalance)
	: Account(account_holder_name, initialBalance) {
}

// toString Package's information (virtual, but not pure virtual)
string CheckingAccount::toString() const {
	ostringstream output;
	output << fixed << setprecision(2);
	output << "\n\tChecking " << Account::toString();
	return output.str();
}