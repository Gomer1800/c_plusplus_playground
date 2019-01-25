#include "Profession.h"
#include <cstdlib>

Profession::Profession(const string& charName, const string& charAlignment,
	const string &profession, const string &item1, const string &item2, const string &item3)
	: Character(charName, charAlignment) {
	setProfession(profession);
	switchItems(1, item1);
	switchItems(2, item2);
	switchItems(3, item3);
}

void Profession::setProfession(const string &inputProfession) {
	charProfession = inputProfession;
}

string Profession::getProfession() const {
	return charProfession;
}

void Profession::switchItems(int itemNumber, const string &inputItem) {
	inventory[itemNumber] = inputItem;
}

string Profession::getItem(int itemNumber) const {
	return inventory[itemNumber];
}

void Profession::generateHitPoints() {
	hitPoints = rand() % 1 + 8;
}

int Profession::getHitPoints() const {
	return hitPoints;
}

string Profession::charInventory() const {
	ostringstream output;

	output << "\nInventory: " << getItem(1) << ", " << getItem(2) << ", " << getItem(3);
	return output.str();
}
string Profession::printCharacterSheet() const {
	ostringstream output;

	output << "Character Name: " << getName() <<
		"\nAlignment: " << getAlignment() << charInventory();

	return output.str();
}