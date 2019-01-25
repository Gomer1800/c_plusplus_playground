#include <iostream>
using namespace std;

#include "OvernightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include "vector"
#include <iomanip>

void virtualViaPointer(const Package* const); // prototype
void virtualViaReference(const Package &); // prototype

int main()
{
	Package defaultPackage("Luis", "1826 Scott Rd", "Burbank", "California", "91501",
		"Luis Sr", "1713 N Niagra", "Burbank", "California", "91502", 10, 1.50);
	OvernightPackage sooner("Luis Sr", "1713 N Niagra", "Burbank", "California", "91502",
		"Luis Sr Sr", "194 W Elmwood Ave", "Burbank", "CA", "91502", 20, 3.50, 0.75);
	TwoDayPackage soon("Luis Sr Sr", "194 W Elmwood Ave", "Burbank", "CA", "91502",
		"Luis", "1826 Scott Rd", "Burbank", "California", "91501", 25, 6.5, 5);

	vector<Package *> packages = { &defaultPackage, &sooner, &soon };

	for (const Package* packagePtr : packages) {
		virtualViaPointer(packagePtr);
	}

	system("PAUSE");
}

// call Package virtual functions toString and earnings off a   
// base-class pointer using dynamic binding                   
void virtualViaPointer(const Package* const baseClassPtr) {
	cout << baseClassPtr->toString()
		<< "\ncost: $" << baseClassPtr->calculateCost() << "\n\n";
}

// call Package functions toString and earnings off a  
// base-class reference using dynamic binding                
void virtualViaReference(const Package &baseClassRef) {
	cout << fixed << setprecision(2) << baseClassRef.toString()
		<< "\nCost of shipping : " + to_string(baseClassRef.calculateCost()) + " sheckels""\n\n";
}
