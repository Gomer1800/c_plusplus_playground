#include "Polynomial.h"
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	Polynomial poly1;
	Polynomial poly2;
	Polynomial poly3;

	cin >> poly1;
	cout << poly1;

	cin >> poly2;
	cout << poly2;

	cout << "\n\npoly1 *= poly2 is:  " << endl;
	poly1 *= poly2;
	cout << poly1;

	cout << "\n\npoly1 += poly2 is: " << endl;
	poly1 += poly2;
	cout << poly1;

	cout << "\n\npoly1 -= poly2 is: " << endl;
	poly1 -= poly2;
	cout << poly1;



	system("pause");
	return 0;
}
