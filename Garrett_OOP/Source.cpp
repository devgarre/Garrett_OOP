#include "stdafx.h"
#include "Garrett_OOP.h"

int main()
{
	Goblin goblin1 = Goblin("Squee", "goblin");
	goblin1.setStats(3, 5);
	Zombie zombie1 = Zombie("Mikaeus", "zombie");
	zombie1.setStats(100, 10);
	goblin1.display();
	zombie1.display();
	system("pause");
	return 0;
}
