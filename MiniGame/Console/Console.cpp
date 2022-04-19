#include "Console.h"



Console::Console()
{
}

Console::~Console()
{
}

void Console::menu()
{
	cout << "Start" << endl
		<< "Pause" << endl
		<< "Setting" << endl;

	pos.X = 9; pos.Y = 0;
	SetConsoleCursorPosition(cons, pos);
	cout << "<--";

	do
	{
		int input = _getch();
		switch (input)
		{
		case(up):
			if (pos.Y == 0)
				pos.Y = 3;
			pos.Y--;
			break;
		case(down):
			if (pos.Y == 2)
				pos.Y = -1;
			pos.Y++;
			break;
		}

		cout << '\b' << "\b\b \b   \b" << '\b';
		SetConsoleCursorPosition(cons, pos);
		cout << "<--";

	} while (true);
}
