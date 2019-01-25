#include "CarbonFootprint.h"
#include "Bicycle.h"

#include <string>
#include <iomanip>
#include <stdexcept>
#include <sstream>
using namespace std;

Bicycle::Bicycle(const string& type) : CarbonFootprint() {
	this->setName(type);
}

double Bicycle::get_carbonFootprint() const {
	return 2000;
}

void Bicycle::setName(const string& name) {
	this->type = name;
}

const string& Bicycle::getName() const {
	return this->type;
}

string Bicycle::toString() const {
	ostringstream output;
	output << fixed << setprecision(2);
	output << "\nBicycle Type: " << getName()
		<< "\nCarbon Footprint: " << get_carbonFootprint() << " lbs of CO2 equivalents from manufacture\n";
	return output.str();
}

