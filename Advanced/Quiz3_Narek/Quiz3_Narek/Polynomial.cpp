#include "Polynomial.h"
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;


Polynomial::Polynomial(int numOfTerms)
{
	this->helpSetNumberOfTerms(numOfTerms);

	setPoly(numOfTerms);
	setHelpPoly(numOfTerms);
}

Polynomial::~Polynomial()
{
	delete[] ptrPoly, helpPtrPoly;
}

void Polynomial::helpSetHelpNumberOfTerms(int terms)
{
	this->helpNumberOfTerms = terms;
}
void Polynomial::helpSetNumberOfTerms(int terms)
{
	this->numberOfTerms = terms;
}


int Polynomial::getHelpNumberOfTerms() const
{
	return this->helpNumberOfTerms;
}
int Polynomial::getNumberOfTerms() const
{
	return this->numberOfTerms;
}


void Polynomial::setHelpPoly(int terms)
{
	this->helpSetHelpNumberOfTerms(terms + 1);
	helpPtrPoly = new double[terms + 1]{};
}


void Polynomial::setPoly(int terms)
{
	this->helpSetNumberOfTerms(terms + 1);
	ptrPoly = new double[terms + 1]{};
}

void Polynomial::setPtrPoly(int index, double coef)
{
	if (index < this->getNumberOfTerms())
	{
		this->ptrPoly[index] = coef;
	}
	else
	{
		throw out_of_range("The index is out of range");
	}
}


double Polynomial::getPoly(int index) const
{
	if (index < this->getNumberOfTerms())
	{
		return this->ptrPoly[index];
	}
	else
	{
		return 0.0;
	}
}
double Polynomial::getHelpPoly(int index) const
{
	if (index < this->getHelpNumberOfTerms())
	{
		return this->helpPtrPoly[index];
	}
	else
	{
		return 0.0;
	}
}



Polynomial Polynomial::operator+(const Polynomial& right)
{
	//delete[] helpPtrPoly;
	Polynomial temp{ *this };
	if (this->getNumberOfTerms() > right.getNumberOfTerms())
	{
		temp.setHelpPoly(this->getNumberOfTerms() - 1);
	}
	else
	{
		temp.setHelpPoly(right.getNumberOfTerms() - 1);
	}

	for (int i = 0; i < this->getHelpNumberOfTerms(); i++)
	{
		temp.ptrPoly[i] = this->getPoly(i) + right.getPoly(i);
	}
	return temp;
}

const Polynomial& Polynomial::operator+=(const Polynomial& right)
{
	for (int i = 0; i < this->getNumberOfTerms(); i++)
	{
		this->ptrPoly[i] += right.getPoly(i);
	}
	return *this;
	// *this = *this + right;

	// return *this;

}

/*
const Polynomial& Polynomial::operator-(const Polynomial& right)
{
delete[] helpPtrPoly;
if (this->getNumberOfTerms() > right.getNumberOfTerms())
{
setHelpPoly(this->getNumberOfTerms() - 1);
}
else
{
setHelpPoly(right.getNumberOfTerms() - 1);
}

for (int i = 0; i < this->getHelpNumberOfTerms(); i++)
{
helpPtrPoly[i] = this->getPoly(i) - right.getPoly(i);           //How do I make sure that none of the poly's get an out of range arguments?   PROBLEM SOLVED
}
return *helpPtrPoly;
}
*/
const Polynomial& Polynomial::operator-=(const Polynomial& right)
{

	for (int i = 0; i < this->getNumberOfTerms(); i++)
	{
		this->ptrPoly[i] -= right.getPoly(i);           //How do I make sure that none of the poly's get an out of range arguments?   PROBLEM SOLVED
	}
	return *this;
	//*this = *this - right;

	//return *this;
}


void Polynomial::operator=(const Polynomial& right)
{
	delete[] ptrPoly;

	this->setPoly(right.getNumberOfTerms() - 1);

	for (int i = 0; i < right.getNumberOfTerms(); i++)
	{
		this->ptrPoly[i] = right.getPoly(i);
	}

	//return *ptrPoly;
}


/*
const Polynomial& Polynomial::operator*(const Polynomial& right)
{
if (this->getNumberOfTerms() > right.getNumberOfTerms())
{
setHelpPoly(this->getNumberOfTerms());
}
else
{
setHelpPoly(right.getNumberOfTerms());
}

for (int i = 0; i < this->getHelpNumberOfTerms(); i++)
{
for (int j = 0; j < right.getNumberOfTerms(); j++)
{
helpPtrPoly[i] = this->getPoly(i) * right.getPoly(j);           //How do I make sure that none of the poly's get an out of range arguments?   PROBLEM SOLVED
}
}
return *helpPtrPoly;
}
*/

const Polynomial& Polynomial::operator*=(const Polynomial& right)
{
	setHelpPoly((this->getNumberOfTerms() - 1) + (right.getNumberOfTerms() - 1));
	for (int i = 0; i < this->getHelpNumberOfTerms(); i++)
	{
		for (int j = 0; j < right.getNumberOfTerms(); j++)
		{
			this->helpPtrPoly[i + j] += (this->getPoly(i) * right.getPoly(j));
			//this->ptrPoly[i] *= right.getPoly(j);           //How do I make sure that none of the poly's get an out of range arguments?   PROBLEM SOLVED
		}
	}

	delete[] this->ptrPoly;
	this->setPoly(this->getHelpNumberOfTerms() - 1);

	for (int i = 0; i < this->getNumberOfTerms(); i++)
	{
		this->ptrPoly[i] = this->helpPtrPoly[i];
	}

	return *this;
	//*this = *this * right;

	//return *this;
}



ostream& operator<<(ostream& output, const Polynomial& poly)
{
	for (int i = 0; i < poly.getNumberOfTerms(); i++)
	{
		if (poly.getPoly(i) == 0)
		{
			output << " 0 ";
		}
		else if (i == 0)
		{
			output << poly.getPoly(i) << " + ";
		}
		else if (i == poly.getNumberOfTerms() - 1)
		{
			output << poly.getPoly(i) << "x^" << i << endl << endl;
		}
		else
		{
			output << poly.getPoly(i) << "x^" << i << " + ";
		}
	}
	return output;
}

istream& operator>>(istream& input, Polynomial& poly)
{
	cout << "Please enter the degree of your polynomial: ";
	input >> poly.helper;
	poly.setPoly(poly.helper);

	cout << "\nPlease enter the coefficients according to the power of x specified: " << endl;

	for (int i = 0; i < poly.getNumberOfTerms(); i++)
	{
		cout << "The coefficient of degree " << i << endl;
		input >> poly.helperCoef;
		poly.setPtrPoly(i, poly.helperCoef);
	}
	return input;
}

