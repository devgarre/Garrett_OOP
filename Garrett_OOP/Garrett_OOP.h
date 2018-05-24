#ifndef Garrett_OOP_H
#define Garrett_OOP_H
#include <string>
#include <iostream>
using namespace std;

class Character {
public:
	Character();
	Character(string charName, string charType);
	string GetName();
	void SetName(string);
	string GetType();
	void SetType(string);
	void display();
protected:
	string name;
	string type;
};

class Goblin : public Character {
private:
	int health, speed;
public:
	Goblin();
	Goblin(string charName, string charType, int charHealth, int charSpeed);
	void setStats(int, int);
	void display();
};

class Zombie : public Character {
private:
	int damage, dps;
public:
	Zombie();
	Zombie(string charName, string charType, int attackStr, int attackSpeed);
	void setStats(int, int);
	void display();
};

#endif