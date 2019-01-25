#include "Character.h"
#include <iostream>
using namespace std;

Character::Character(const string &charName, const string &charAlignment)
	: name(charName), alignment(charAlignment) {}

void Character::setName(const string &inputName) {
	name = inputName;
}

string Character::getName() const {
	return name;
}

void Character::setAlignment(const string &inputAlignment) {
	alignment = inputAlignment;
}

string Character::getAlignment() const {
	return alignment;
}

string Character::printCharacterSheet() const {
	ostringstream output;

	output << "Character Name: " << getName() <<
		"\nAlignment: " << getAlignment();

	return output.str();
}