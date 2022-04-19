#include "Console.cpp"
#include "Weapon.h"
#include <time.h>
#include <stdlib.h>

int main()
{
	Weapon w1;
	w1.damage;

	Pistol p1;


	srand(time(NULL));
	int a;
	do
	{
		a = rand() % 20;
		cout << a << '\n';
	} while (a >= 0 && a <= 17);

	//Console c1;
	//c1.menu();

}
