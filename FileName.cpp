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
		std::cout << "����� �����\n\n(1)������ ����\n(2)������� �����\n(3)����� �� ����\n";
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
			std::cout << "(1)����� 1\n";
			std::cout << "(2)����� 2\n";
			std::cout << "(3)����� 3\n";
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
				std::cout << "������, ����� ������ ����!";
				Sleep(3000);
				break;
			}
		}
		else if (NumStart == 3)
		{
			std::cout << "����� �� ����......";
			break;
		}
		else
		{
			system("cls");
			std::cout << "������ \n";
			Sleep(500);
		}
		system("cls");
	}
}