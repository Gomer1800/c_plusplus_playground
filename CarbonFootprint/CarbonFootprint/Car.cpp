#include "CarbonFootprint.h"
#include "Car.h"

#include <string>
#include <iomanip>
#include <stdexcept>
#include <sstream>
using namespace std;

Car::Car(const string& modelName) : CarbonFootprint() {
	this->setName(modelName);
}

double Car::get_carbonFootprint() const {
	return 4600;
}

void Car::setName(const string& name) {
	this->modelName = name;
}

const string& Car::getName() const {
	return this->modelName;
}

string Car::toString() const {
	ostringstream output;
	output << fixed << setprecision(2);
	output << "\nBuilding Type: " << getName()
		<< "\nCarbon Footprint: " << get_carbonFootprint() << " lbs of C02 equivalents per year of operation\n";
	return output.str();
}