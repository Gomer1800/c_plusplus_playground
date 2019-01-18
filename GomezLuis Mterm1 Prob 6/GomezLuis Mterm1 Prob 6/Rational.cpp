#include <iostream>
#include "Rational.h"
using namespace std;

Rational::Rational(){
	num = 0;
	setDenominator(1);
}

Rational::Rational(int n, int d){
	num = n;
	setDenominator(d);
	simplify();
}

void Rational::setDenominator(int d){
	if (d <= 0.0){
		throw invalid_argument("den must be > 0.0");
	}
	
	den = d;
}

void Rational::simplify(){
	int largest;
	int gcd = 0;
	if (num > den)
	{
		largest = num;
	}
	else
	{
		largest = den;
	}
	for (int divisor = 2; divisor <= largest; ++divisor)
	{

		if (num % divisor == 0 && den % divisor == 0)
		{
			gcd = divisor;
		}
	}
	if (gcd != 0)
	{
		num /= gcd;

		den /= gcd;
	}
}

void Rational::printRational() const {

	if (num == 0)
	{
		cout << 0;
	}
	else
	{
		cout << num << '/' << den << endl;
	}
}

Rational Rational::operator+(Rational& obj)
{
	Rational dummyObject(obj.num * den + obj.den * num, obj.den * den);
	dummyObject.simplify();

	return (dummyObject);
}

Rational Rational::operator-(Rational& obj)
{
	Rational dummyObject(obj.den * num - den * obj.num, obj.den * den);
	dummyObject.simplify();

	return (dummyObject);
}

Rational Rational::operator*(Rational& obj)
{
	Rational dummyObject(obj.num * num, obj.den * den);
	dummyObject.simplify();

	return (dummyObject);
}

Rational Rational::operator/(Rational& obj)
{
	Rational dummyObject(obj.den * num, obj.num * den);
	dummyObject.simplify();

	return (dummyObject);
}

void Rational::operator>(Rational& obj){

	double first = (num * 1.0) / (den * 1.0);
	double second = (obj.num * 1.0) / (obj.den * 1.0);

	if (first > second)
	{
		cout << num << "/" << den << " is bigger" << endl;
	}
	else
	{
		cout << obj.num << "/" << obj.den << " is bigger" << endl;
	}
}

void Rational::operator<(Rational& obj){
	double first = (num * 1.0) / (den * 1.0);
	double second = (obj.num * 1.0) / (obj.den * 1.0);

	if (first < second)
	{
		cout << num << "/" << den << " is less than" << endl;
	}
	else
	{
		cout << obj.num << "/" << obj.den << " is less than" << endl;
	}
}

void Rational::operator=(Rational& obj){
	double first = (num * 1.0) / (den * 1.0);
	double second = (obj.num * 1.0) / (obj.den * 1.0);

	if (first == second){
		cout << "The fractions are equal" << endl;
	}
	else{
		cout << "The fractions are not equal" << endl;
	}
}