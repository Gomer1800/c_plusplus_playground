#include "CarbonFootprint.h"
#include "Building.h"

#include <string>
#include <iomanip>
#include <stdexcept>
#include <sstream>
using namespace std;

Building::Building(const string& buildingType) : CarbonFootprint() {
	this->setName(buildingType);
}

double Building::get_carbonFootprint() const {
	return 80;
}

void Building::setName(const string& name) {
	this->buildingType = name;
}

const string& Building::getName() const {
	return this->buildingType;
}

string Building::toString() const {
	ostringstream output;
	output << fixed << setprecision(2);
	output << "\nBuilding Type: " << getName()
		<< "\nCarbon Footprint: " << get_carbonFootprint() << " metric tonnes of C02 equivalents per year of operation\n";
	return output.str();
}