#include <iostream>
#include <windows.h>
#include "hero.h"
#include "levels.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	while (true)
	{
		std::cout << "Жизнь после\n\n(1)Начать игру\n(2)Выбрать главу\n(3)Выйти из игры\n";
		int NumStart = 0;
		std::cin >> NumStart;
		if (NumStart == 1)
		{
			level1();
			level2();
			level3();
		}
		else if (NumStart == 2)
		{
			system("cls");
			std::cout << "(1)Глава 1\n";
			std::cout << "(2)Глава 2\n";
			std::cout << "(3)Глава 3\n";
			int load = 0;
			std::cin >> load;
			if (load == 1)
			{
				level1();
			}
			else if (load == 2)
			{
				level2();
			}
			else if (load == 3)
			{
				level3();
			}
			else
			{
				system("cls");
				std::cout << "Ошибка, этого уровня нету!";
				Sleep(3000);
				break;
			}
		}
		else if (NumStart == 3)
		{
			std::cout << "Выход из игры......";
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