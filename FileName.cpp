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
		std::cout << "����� �����\n\n(1)������ ����\n(2)����� �� ����\n";
		int NumStart = 0;
		std::cin >> NumStart;
		if (NumStart == 1)
		{
			level1();

			

		}
		else if (NumStart == 2)
		{
			std::cout << "����� �� ����.......";
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