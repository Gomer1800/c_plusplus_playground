#include "Hannah.h"
#include <iostream>
using namespace std;

Hannah::Hannah(int num, int num2)
	:b(num),
	h(num2)
{
}

void Hannah::printCrap() {
	cout << "this =" << this << endl;
	cout << "b=" << b << endl;
	cout << "&b =" << &b << endl;
	cout << "&h =" << &h << endl;
	cout << "this->h "<< this->h <<endl;
	cout << "(*this).h= "<< (*this).h <<endl;

	cout << "b=" << b << endl;
	cout << "&b =" << &b <<endl;
	cout << "this->b " << this->b << endl;
	cout << "(*this).b= " << (*this).b << endl;
	cout << "this =" << this << endl;
}