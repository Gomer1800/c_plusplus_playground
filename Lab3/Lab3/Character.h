#pragma once
/*
-Abstract class Character
-has member variables for name, alignment
-inventory & startingHitPoints are a pure virtual function
-
*/
#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

class Character {
public:
	Character(const string&, const string&);
	virtual ~Character() = default;

	void setName(const string&);
	string getName() const;

	void setAlignment(const string&);
	string getAlignment() const;

	virtual string charInventory() const = 0;
	virtual void generateHitPoints() = 0;
	virtual string printCharacterSheet() const;

private:
	string name;
	string alignment;
};

#endif // !CHARACTER_H
