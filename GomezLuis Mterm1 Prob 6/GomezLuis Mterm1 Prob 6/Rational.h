#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
private:
	int num;
	int den;

public:
	Rational();
	Rational(int a, int b);
	void setDenominator(int);

	void simplify();
	void printRational()const;
	void operator>(Rational&);
	void operator<(Rational&);
	void operator=(Rational&);

	Rational operator+(Rational&);
	Rational operator-(Rational&);
	Rational operator*(Rational&);
	Rational operator/(Rational&);
};
#endif // RATIONAL_H

