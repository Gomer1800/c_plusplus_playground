/*Luis Gomez
CS 135 Mon Nights
Q5

Pseudocode:

Display "Please enter the number of apples you want to purchase: "
Ask numApples
Display "Please enter the number of oranges you want to purchase: "
Ask numOranges
Display "Please enter the number of bananas you want to purchase: "
Ask numBananas

Calculate applesCost = .65 * numApples
Calculate orangesCost = .90 * numOranges
Calculate bananasCost = .70 * numBananas

Display "BOB'S FRUITS GROCERY INVOICE"
Display "----------------------------"
Display & Format numApples "Apples @ 0.65 each = $ "applesCost
Display & Format numOranges "Apples @ 0.90 each = $ "orangesCost
Display & Format numApples "Apples @ 0.70 each = $ "bananasCost
Display & Format "_____________"
Display & Format "TOTAL = $ "applesCost + orangesCost + bananasCost
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	signed int numApples = 0;
	signed int numOranges = 0;
	signed int numBananas = 0;

	bool flag1 = 1, flag2 = 1, flag3 = 1; //INPUT VALIDATION TRIGGERS

	cout << "Please enter the number of apples you want to purchase: \n";
	while (flag1 == 1)
	{
		cin >> numApples;
		if (numApples >= 0)
			flag1 = 0;
	}
	cout << "Please enter the number of oranges you want to purchase: \n";
	while (flag2 == 1)
	{
		cin >> numOranges;
		if (numOranges >= 0)
			flag2 = 0;
	}
	cout << "Please enter the number of bananas you want to purchase: \n";
	while (flag3 == 1)
	{
		cin >> numBananas;
		if (numBananas >= 0)
			flag3 = 0;
	}

	double costApples = .65 * numApples;
	double costOranges = .90 * numOranges;
	double costBananas = .70 * numBananas;
	double totalCost = costApples + costOranges + costBananas;

	cout << "\nBOB'S FRUITS GROCERY INVOICE\n";
	cout << "----------------------------\n";
	cout << "  " << numApples << " Apples  @ 0.65 each   = $ " << fixed << setprecision(2) << costApples << endl;
	cout << "  " << numOranges << " Oranges @ 0.90 each   = $ " << fixed << costOranges << endl;
	cout << "  " << numBananas << " Bananas @ 0.70 each   = $ " << fixed << costBananas << endl;
	cout << "\t\t\t-----------" << endl;
	cout << "\t\t    TOTAL = $ "<< fixed << totalCost << endl; //THESE TABS TOOK FOREVER TO FIND, SETW DIDNT WORK!
	//system("PAUSE");
	return 0;
}