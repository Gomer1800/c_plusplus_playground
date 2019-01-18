#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;
const int SIZE = 2;

class Polynomial
{
	friend ostream& operator<<(ostream&, const Polynomial&);
	friend istream& operator>>(istream&, Polynomial&);
	
private:
	double *ptrPoly;
	double *helpPtrPoly;

	int numberOfTerms;
	int helpNumberOfTerms;

	void helpSetHelpNumberOfTerms(int);
	void helpSetNumberOfTerms(int);
public:
	Polynomial(int numOfTerms = 0);
	~Polynomial();

	int helper;
	double helperCoef;
	void setPtrPoly(int, double);

	void setPoly(int);
	double getPoly(int) const;

	void setHelpPoly(int);
	double getHelpPoly(int) const;



	int getHelpNumberOfTerms() const;
	int getNumberOfTerms() const;

	void operator=(const Polynomial&);
	Polynomial operator+(const Polynomial&);
	const Polynomial& operator-(const Polynomial&);
	const Polynomial& operator*(const Polynomial&);
	const Polynomial& operator*=(const Polynomial&);
	const Polynomial& operator+=(const Polynomial&);
	const Polynomial& operator-=(const Polynomial&);




};

#endif

