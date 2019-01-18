#include "Account.h"
#include "SavingsAccount.h"
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

SavingsAccount::SavingsAccount(const string& account_holder_name, double initialBalance, double interestRate)
	: Account(account_holder_name, initialBalance) {
	this->interestRate = interestRate;
}

bool SavingsAccount::get_accountType() const {
	return this->accountType;
}

// toString Package's information (virtual, but not pure virtual)
string SavingsAccount::toString() const {
	ostringstream output;
	output << fixed << setprecision(2);
	output << "\n\tSavings " << Account::toString()
		<< "\nInterest Accrued this month: " + to_string(calculateInterest());
	return output.str();
}

double SavingsAccount::calculateInterest() const {
	return (this->interestRate * this->getBalance());
}