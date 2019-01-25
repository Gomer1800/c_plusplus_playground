#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using namespace std;

class Account
{
private:
	string account_holder_name;
	double balance;

public:
	const bool accountType = 0;
	// CONSTRUCTOR & DESTRUCTOR
	Account(const string& = "", double = 0);

	virtual ~Account() = default;

	double getBalance() const;
	void setBalance(double);

	const string& getName() const;
	void setName(const string&);

	// VIRTUAL MEMBER FUNCTIONS
	virtual bool get_accountType() const;
	virtual void credit(double);
	void debit(double);
	virtual string toString() const;
};

#endif //ACCOUNT_H
