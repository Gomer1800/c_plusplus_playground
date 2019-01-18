#pragma once
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"
#include <string>
using namespace std;

class CheckingAccount : public Account
{
private:
public:
	const bool accountType = 0;
	// CONSTRUCTOR & DESTRUCTOR
	CheckingAccount(const string& = "", double = 0);

	virtual ~CheckingAccount() = default;
	virtual string toString() const override;
};

#endif //CHECKINGACCOUNT_H