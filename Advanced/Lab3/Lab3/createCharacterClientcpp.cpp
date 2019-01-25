#include "Character.h"
#include "Profession.h"

#include <iostream>

int main() {
	Profession lumberJack("Larry", "LN", "Lumberjack", "Woodcutter's Axe",
		"Lumberjack Outfit", "Car Keys");

	cout << lumberJack.printCharacterSheet() << endl;

	/*const Character* characterPtr = &lumberJack;
	cout << characterPtr->printCharacterSheet();*/

	system("PAUSE");
}