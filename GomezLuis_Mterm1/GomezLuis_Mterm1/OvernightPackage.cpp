#include "OvernightPackage.h"
#include <sstream>
#include <iomanip>

OvernightPackage::OvernightPackage(const string& namSend, const string& adSend, const string& ctSend, const string& stSend, const string& zipSend,
	const string& namRec, const string& adRec, const string& ctRec, const string& stRec, const string& zipRec, 
	double wt, double cost, double addCost)
	:Package(namSend, adSend, ctSend, stSend, zipSend, namRec, adRec, ctRec, stRec, zipRec, wt, cost){
	this->overCost = addCost;
}
void OvernightPackage::setAddCost(double addCost){
	this->overCost = addCost;
}
double OvernightPackage::getAddCost() const{
	return this->overCost;
}

double OvernightPackage::calculateCost() const{
	return ((this->getAddCost() + Package::calculateCost())* Package::getWeight());
}

// return a string representation of OvernightPackage's information 
string OvernightPackage::toString() const {
	ostringstream output;
	output << fixed << setprecision(2);
	output << "\n\tOvernight " << Package::toString();
	return output.str();
}