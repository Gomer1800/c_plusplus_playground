#pragma once
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"
#include <string>
using namespace std;

class SavingsAccount : public Account
{
private:
	double interestRate;
	double interestOwed;

public:
	const bool accountType = 1;
	// CONSTRUCTOR & DESTRUCTOR
	SavingsAccount(const string& = "", double = 0, double = 0);
	
	virtual ~SavingsAccount() = default;

	double calculateInterest() const;

	virtual bool get_accountType() const override;
	virtual string toString() const override;
};

#endif //SAVINGSACCOUNT_H