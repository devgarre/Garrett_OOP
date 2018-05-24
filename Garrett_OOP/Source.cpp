#include "stdafx.h"
#include "Garrett_OOP.h"

int main()
{
	Character human1 = Character("Odric", "human");
	Goblin goblin1 = Goblin("Squee", "goblin", 999, 5);
	Zombie zombie1 = Zombie("Yawgmoth", "zombie", 100, 2);
	human1.display();
	goblin1.display();
	zombie1.display();
	system("pause");
	return 0;
}
