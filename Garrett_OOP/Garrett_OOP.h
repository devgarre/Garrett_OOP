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
	virtual void display();
protected:
	string name;
	string type;
};

class Goblin : public Character {
private:
	int health, speed;
public:
	void setStats(int, int);
};

class Zombie : public Character {
private:
	int health, speed;
public:
	void setStats(int, int);
};

#endif