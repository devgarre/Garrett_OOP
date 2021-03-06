// Garrett_OOP.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "Garrett_OOP.h"

Character::Character() {}
Character::Character(string charName, string charType)
{
	name = charName;
	type = charType;
}

Goblin::Goblin() {}
Goblin::Goblin(string charName, string charType, int charHealth, int charSpeed) 
{
	name = charName;
	type = charType;
	health = charHealth;
	speed = charSpeed;
}

Zombie::Zombie() {}
Zombie::Zombie(string charName, string charType, int attackStr, int attackSpeed)
{
	name = charName;
	type = charType;
	damage = attackStr;
	dps = attackSpeed;
}

string Character::GetName() { return name; }
void Character::SetName(string charName) { name = charName; }

string Character::GetType() { return type; }
void Character::SetType(string charType) { type = charType; }

void Character::display() {
	cout << "This character is named " << name << "." << endl;
	cout << name << " is a " << type << "." << endl << endl;
}

void Goblin::display() {
	cout << "This character is named " << name << "." << endl;
	cout << name << " is a " << type << "." << endl;
	cout << name << " has " << health << " hit points." << endl;
	cout << name << " moves " << speed << " feet per turn." << endl << endl;
}

void Zombie::display() {
	cout << "This character is named " << name << "." << endl;
	cout << name << " is a " << type << "." << endl;
	cout << name << " hits for " << damage << " damage per attack." << endl;
	cout << name << " attacks " << dps << " times per turn." << endl << endl;
}