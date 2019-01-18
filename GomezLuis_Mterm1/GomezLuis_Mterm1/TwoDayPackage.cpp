#include "Package.h"
#include "TwoDayPackage.h"
#include <sstream>
#include<iomanip>

TwoDayPackage::TwoDayPackage(const string& namSend, const string& adSend, const string& ctSend, const string& stSend, const string& zipSend,
	const string& namRec, const string& adRec, const string& ctRec, const string& stRec, const string& zipRec,
	double wt, double cost, double twoDay) :
	Package(namSend, adSend, ctSend, stSend, zipSend, namRec, adRec, ctRec, stRec, zipRec, wt, cost){
	this->setCost(twoDay);
}

void TwoDayPackage::setCost(double twoDay){
	this->cost = twoDay;
}
double TwoDayPackage::getCost() const{
	return this->cost;
}

double TwoDayPackage::calculateCost() const{
	return (Package::calculateCost()) + (this->getCost() * getWeight());
}

string TwoDayPackage::toString() const {
	ostringstream output;
	output << fixed << setprecision(2);
	output << "\n\tTwo-Day " << Package::toString();
	return output.str();
}