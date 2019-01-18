/*
#include <iostream>
using namespace std;

#include "OvernightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"

int main()
{
	Package defaultPackage("Luis", "1826 Scott Rd", "Burbank", "California", "91501", 
		"Luis Sr", "1713 N Niagra", "Burbank", "California", "91502",10, 1.50);
	OvernightPackage sooner("Luis Sr", "1713 N Niagra", "Burbank", "California", "91502", 
		"Luis Sr Sr", "194 W Elmwood Ave", "Burbank", "CA", "91502", 20, 3.50, 0.75);
	TwoDayPackage soon("Luis Sr Sr", "194 W Elmwood Ave", "Burbank", "CA", "91502", 
		"Luis", "1826 Scott Rd", "Burbank", "California", "91501", 25, 6.5, 5);

	cout << "\tDefault package: " <<endl;
	cout << "Sender Name: " << defaultPackage.getSendName() << endl;
	cout << "Sender Address: " << defaultPackage.getSendAddress() << endl;
	cout << "Sender City: " << defaultPackage.getSendCity() << endl;
	cout << "Sender State: " << defaultPackage.getSendState() << endl;
	cout << "Sender ZIP: " << defaultPackage.getSendZIP() << endl;

	cout << "\nRecipient Name: " << defaultPackage.getRecName() << endl;
	cout << "Recipient Address: " << defaultPackage.getRecAddress() << endl;
	cout << "Recipient City: " << defaultPackage.getRecCity() << endl;
	cout << "Recipient State: " << defaultPackage.getRecState() << endl;
	cout << "Recipient ZIP: " << defaultPackage.getRecZIP() << endl;
	cout << "Weight: " << defaultPackage.getWeight() << "oz " << endl;
	cout << "Cost of shipping: " << defaultPackage.calculateCost() << " sheckels"<<endl;

	cout << "\n\t2-Day Package info: " << endl;
	cout << "Sender Name: " << soon.getSendName() << endl;
	cout << "Sender Address: " << soon.getSendAddress() << endl;
	cout << "Sender City: " << soon.getSendCity() << endl;
	cout << "Sender State: " << soon.getSendState() << endl;
	cout << "Sender ZIP: " << soon.getSendZIP() << endl;

	cout << "\nRecipient Name: " << soon.getRecName() << endl;
	cout << "Recipient Address: " << soon.getRecAddress() << endl;
	cout << "Recipient City: " << soon.getRecCity() << endl;
	cout << "Recipient State: " << soon.getRecState() << endl;
	cout << "Recipient ZIP: " << soon.getRecZIP() << endl;
	cout << "Weight: " << soon.getWeight() << "oz " << endl;
	cout << "Cost of shipping: " << soon.calculateCost() << " sheckels" << endl;

	cout << "\n\tOverNight Package: " << endl;
	cout << "Sender Name: " << sooner.getSendName() << endl;
	cout << "Sender Address: " << sooner.getSendAddress() << endl;
	cout << "Sender City: " << sooner.getSendCity() << endl;
	cout << "Sender State: " << sooner.getSendState() << endl;
	cout << "Sender ZIP: " << sooner.getSendZIP() << endl;

	cout << "\nRecipient Name: " << sooner.getRecName() << endl;
	cout << "Recipient Address: " << sooner.getRecAddress() << endl;
	cout << "Recipient City: " << sooner.getRecCity() << endl;
	cout << "Recipient State: " << sooner.getRecState() << endl;
	cout << "Recipient ZIP: " << sooner.getRecZIP() << endl;
	cout << "Weight: " << sooner.getWeight() << "oz " << endl;
	cout << "Cost of shipping: " << sooner.calculateCost() << " sheckels" << endl;

	system("PAUSE");
}

*/
