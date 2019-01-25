#pragma once
#ifndef PROFESSION_H
#define PROFESSION_H

#include "Character.h"

class Profession : public Character {
public:
	Profession(const string&, const string&,
		const string&, const string&, const string&, const string&);
	virtual ~Profession() = default;

	void setProfession(const string&);
	string getProfession() const;

	void switchItems(int, const string&);
	string getItem(int) const;

	virtual void generateHitPoints() override;
	int getHitPoints() const;

	virtual string charInventory() const override;
	virtual string printCharacterSheet() const override;

private:
	string charProfession;
	int hitPoints;
	string inventory[3];
};
#endif // !PROFESSION_H
