#pragma once
#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


class Weapon
{

public:
	int damage; // ��������

};

class Pistol : public Weapon
{
	Pistol();
	~Pistol();
};
