#pragma once
#pragma once
#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using namespace std;

class Package
{
private:
	string nameSend;
	string addressSend;
	string citySend;
	string stateSend;
	string ZIPSend;

	string nameRec;
	string addressRec;
	string cityRec;
	string stateRec;
	string ZIPRec;

	double weight;
	double costPerOunce;

public:
	Package(const string& = "", const string& = "",
		const string& = "", const string& = "",
		const string& = "",
		const string& = "", const string& = "",
		const string& = "", const string& = "",
		const string& = "",
		double = 0, double = 0);

	//SENDER FUNCTIONS
	void setSendName(const string&);
	const string& getSendName() const;

	void setSendAddress(const string&);
	const string& getSendAddress() const;

	void setSendCity(const string&);
	const string& getSendCity() const;

	void setSendState(const string&);
	const string& getSendState() const;

	void setSendZIP(const string&);
	const string& getSendZIP() const;

	// RECIPIENT FUNCTIONS
	void setRecName(const string&);
	const string& getRecName() const;

	void setRecAddress(const string&);
	const string& getRecAddress() const;

	void setRecCity(const string&);
	const string& getRecCity() const;

	void setRecState(const string&);
	const string& getRecState() const;

	void setRecZIP(const string&);
	const string& getRecZIP() const;

	// Weight & Cost Functions
	void setWeight(double);
	double getWeight() const;

	void setCostPerOunce(double);
	double getCostPerOunce() const;

	double calculateCost() const;

};

#endif //PACKAGE_H
