#include <iostream>
#include <windows.h>
#include "hero.h"
#include "level.cpp"
#include "level2.cpp"
#include "level3.cpp"
#include "level4.cpp"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	while (true)
	{
		std::cout << "Жизнь после\n\n(1)Начать игру\n(2)Выйти из игры\n";
		int NumStart = 0;
		std::cin >> NumStart;
		if (NumStart == 1)
		{
			level1();

			

		}
		else if (NumStart == 2)
		{
			std::cout << "Выход из игры.......";
			break;
		}
		else
		{
			system("cls");
			std::cout << "ошибка \n";
			Sleep(500);
		}
		system("cls");
	}
	

	




}