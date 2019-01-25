/*
Luis Gomez
CS 135 Mon Night
HW7 P3

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
#include <iostream>
#include<iomanip>
#include <string>
#include "GiftWrap.h"
using namespace std;

int main()
{
	bool mainMenu;
	char userInput = 0;
	string storeName = "Sally's Gifts";

	GiftWrap sallys(.0925, .0025);
	do
	{
		mainMenu = 1;
		double wrapInput = 0.0;
		cout << "GIFT WRAP INVOICE GENERATOR" << endl;
		cout << "-------------------------------" << endl;
		cout << "a)Generate Gift Wrap Invoice" << endl;
		cout << "q)Quit" << endl;
		cin >> userInput;

		switch (userInput)
		{
		case 'a':
		case 'A':
			do{//ASK USER FOR LENGTH
				cout << "Please enter the length of box to be wrapped: ";
				cin >> wrapInput;

				if (sallys.setLength(wrapInput) == 0)
					cout << "Invalid entry. Please enter a length >= 0." << endl;

			} while (sallys.setLength(wrapInput) == 0);

			do{//ASK USER FOR WIDTH
				cout << "Please enter the width of box to be wrapped: ";
				cin >> wrapInput;

				if (sallys.setWidth(wrapInput) == 0)
					cout << "Invalid entry. Please enter a width >= 0." << endl;

			} while (sallys.setWidth(wrapInput) == 0);

			do{//ASK USER FOR HEIGTH
				cout << "Please enter the height of box to be wrapped: ";
				cin >> wrapInput;

				if (sallys.setHeight(wrapInput) == 0)
					cout << "Invalid entry. Please enter a heigth >= 0." << endl;

			} while (sallys.setHeight(wrapInput) == 0);
			//PRINT INVOICE
			cout << "\nGIFT WRAP INVOICE - " << storeName << endl;
			cout << "----------------------------------" << endl;
			cout << "Box Length:\t" << fixed << setprecision(2) << sallys.getLength() << endl;
			cout << "Box Width:\t" << fixed << setprecision(2) << sallys.getWidth() << endl;
			cout << "Box Height:\t" << fixed << setprecision(2) << sallys.getHeight() << endl;
			cout << "Price Per Inch:\t" << fixed << setprecision(4) << sallys.getPricePerInch() << endl;
			cout << "\nSUBTOTAL:\t" << fixed << setprecision(2) << sallys.calcSubtotal() << endl;
			cout << "TAX:\t\t" << fixed << setprecision(2) << sallys.calcTax() << endl;
			cout << "\t\t----------" << endl;
			cout << "TOTAL:\t\t" << fixed << setprecision(2) << sallys.calcTotal() << "\n" << endl;

			break;

		case 'q':
		case 'Q':
			mainMenu = 0;
			cout << "Thank you for visiting " << storeName << "! Please come again!\n" << endl;
			break;

		default:
			cout << "Invalid Selection" << endl;
			break;

		}
	} while (mainMenu == 1);
	system("PAUSE");
	return 0;
}