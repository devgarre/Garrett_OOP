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

void Goblin::setStats(int x, int y)
{
	health = x;
	speed = y;
}

void Zombie::setStats(int x, int y) {
	health = x;
	speed = y;
}

string Character::GetName() { return name; }
void Character::SetName(string charName) { name = charName; }

string Character::GetType() { return type; }
void Character::SetType(string charType) { type = charType; }

void Character::display() {
	cout << "This character is named " << name << "." << endl;
	cout << "This character is a " << type << "." << endl;
	cout << "This character has " << health << " hit points." << endl;
	cout << "This character moves " << speed << " feet per turn." << endl;
}