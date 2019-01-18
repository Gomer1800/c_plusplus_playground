#include <iostream>
using namespace std;

#include "CarbonFootprint.h"
#include "Car.h"
#include "Building.h"
#include "Bicycle.h"
#include <vector>
#include <iomanip>
#include <exception>


int main() {
	int userInput = 0;
	int selectAccount = 0;

	Bicycle bike("Schwinn");
	Car automobile("Honda Civic 2018");
	Building home("Residential");

	vector<CarbonFootprint *> footprints = { &bike, &automobile, &home };
	const CarbonFootprint * footprintPtr;

	// polymorphically process each element in vector
	for (CarbonFootprint* footprintPtr : footprints) {
		cout << footprintPtr->toString() << endl;

		cout << "Polymorphically processing the get_carbonFootprint method: "<< footprintPtr->get_carbonFootprint() << endl;
	}

	system("PAUSE");
}