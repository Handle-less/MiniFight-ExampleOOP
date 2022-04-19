#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;



class Console
{
	HANDLE cons = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	enum input_pos { up = 72, down = 80 };

public:
	Console();
	~Console();

	void menu();

private:


};
