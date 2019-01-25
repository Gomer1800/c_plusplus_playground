#include "Account.h"
#include <iostream>
#include <iomanip>
using namespace std;

Account::Account(const string& account_holder_name, double initialBalance) {
	this->setName(account_holder_name);
	this->setBalance(initialBalance);
}

void Account::setName(const string& name) {
	this->account_holder_name = name;
}

const string& Account::getName() const {
	return this->account_holder_name;
}

void Account::setBalance(double newBalance) {
	this->balance = newBalance;
}

double Account::getBalance() const{
	return this->balance;
}

bool Account::get_accountType() const{
	return this->accountType;
}

// DEBIT & CREDIT
void Account::debit(double amount) {
	this->balance -= amount;
}

void Account::credit(double amount) {
	this->balance += amount;
}

// toString Package's information (virtual, but not pure virtual)
string Account::toString() const {
	return "\n\tAccount Info: \nAccount Holder: " + getName() +

		"\nCurrent Balance: $" + to_string(getBalance());
}