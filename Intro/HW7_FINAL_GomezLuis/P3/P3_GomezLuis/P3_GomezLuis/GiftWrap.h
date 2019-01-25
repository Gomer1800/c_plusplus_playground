/*
UML

GiftWrap

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
+calcSubtotal():double
+calcTax():double
+calTotal():double
*/

#ifndef GIFTWRAP_H
#define GIFTWRAP_H

class GiftWrap
{
private: // ATTRIBUTES
	double length;
	double width;
	double height;
	double taxRate;
	double pricePerInch;

public:
	//CONSTRUCTORS
	GiftWrap(double, double);
	GiftWrap();
	//SET & GET
	bool setLength(double);
	bool setWidth(double);
	bool setHeight(double);
	bool setTaxRate(double);
	bool setPricePerInch(double);
	double getLength()const;
	double getWidth()const;
	double getHeight()const;
	double getTaxRate()const;
	double getPricePerInch()const;
	//ADDITIONAL MEMBER FUNC
	double calcSubtotal();
	double calcTax();
	double calcTotal();
};

#endif