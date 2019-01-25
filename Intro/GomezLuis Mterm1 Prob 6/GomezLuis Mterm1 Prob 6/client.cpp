#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
	Rational a(3, 4);
	cout << "Your first rational is ";
	a.printRational();

	Rational b(1, 2);
	cout << "Your second rational is ";
	b.printRational();

	cout << "Sum : ";
	Rational result1(a + b);
	result1.printRational();

	cout << "Difference : ";
	Rational result2(a - b);
	result2.printRational();

	cout << "Product : ";
	Rational result3(a * b);
	result3.printRational();

	cout << "Quotient : ";
	Rational result4(a / b);
	result4.printRational();

	(a > b);
	(a < b);
	(a = b);
	cout << endl;
	system("PAUSE");
}