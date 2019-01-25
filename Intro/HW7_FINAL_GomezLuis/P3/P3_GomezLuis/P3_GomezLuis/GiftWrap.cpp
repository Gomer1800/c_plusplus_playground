/*

//UML

//GiftWrap

//ATTRIBUTES
-length: double
-width: double
-height: double
-taxRate: double
-pricePerInch: double

//MEMBER FUNCTIONS
+GiftWrap():constructor
+GiftWrap(tax:double ,inchPrice:double):constuctor
+setLength(len:double):bool
+setWidth(wid:double):bool
+setHeight(h:double):bool
+setTaxRate(tax:double):bool
+setPricePerInch(inchPrice:double):bool
+getLength():double
+getWidth():double
+getHeight():double
+getTaxRate():double
+getPricePerInch():double

*/
#include "GiftWrap.h"
using namespace std;

/**************************************************
//CONSTRUCTORS
***************************************************/
GiftWrap::GiftWrap(double tax, double inchPrice) //2 PARAMETERS
{	//Input Validation for inch price 
	if (inchPrice < 0)
	{
		pricePerInch = 0;
	}
	else
		pricePerInch = inchPrice;
	//Input Validation for tax
	if (tax < 0)
	{
		taxRate = 0;
	}
	else if (tax > 1)
	{
		taxRate = 1;
	}
	else
		taxRate = tax;

	length = 1.0;
	width = 1.0;
	height = 1.0;
}

GiftWrap::GiftWrap() //DEFAULT
{
	length = 1.0;
	width = 1.0;
	height = 1.0;
	taxRate = 0.08;
	pricePerInch = 0.0036;
}

/**********************************************************************
SET FUNCTIONS
***********************************************************************/
bool GiftWrap::setLength(double len)
{
	bool validData; //Input validation Flag

	if (len >= 0)
	{
		length = len;
		validData = 1;
	}
	else
		validData = 0;

	return validData;

}


bool GiftWrap::setWidth(double wid)
{
	bool validData; //Input validation Flag

	if (wid >= 0)
	{
		width = wid;
		validData = 1;
	}
	else
		validData = 0;

	return validData;

}

bool GiftWrap::setHeight(double h)
{
	bool validData; //Input validation Flag

	if (h >= 0)
	{
		height = h;
		validData = 1;
	}
	else
		validData = 0;

	return validData;

}

bool GiftWrap::setPricePerInch(double inchPrice)
{
	bool validData; //Input validation Flag

	if (inchPrice >= 0)
	{
		pricePerInch = inchPrice;
		validData = 1;
	}
	else
		validData = 0;

	return validData;

}
/************************************************
GET FUNCTIONS
**************************************************/

double GiftWrap::getLength()const
{
	return length;
}

double GiftWrap::getWidth()const
{
	return width;
}

double GiftWrap::getHeight()const
{
	return height;
}

double GiftWrap::getTaxRate()const
{
	return taxRate;
}

double GiftWrap::getPricePerInch()const
{
	return pricePerInch;
}

double GiftWrap::calcSubtotal()
{
	double surfaceArea = (2 * length*width) + (2 * length*height) + (2 * width*height);

	double subTot = surfaceArea * pricePerInch;

	return subTot;
}
/************************************************
ADDITIONAL MEMBER FUNCTIONS
**************************************************/
double GiftWrap::calcTax()
{
	double tax = calcSubtotal() * taxRate;

	return tax;
}

double GiftWrap::calcTotal()
{
	double total = calcTax() + calcSubtotal();

	return total;
}