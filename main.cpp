#include <iostream>
#include <windows.h>
#include "Game.h"

/*
Добавить структуру Hero (Система статов)
Исправить ошибки - сделано
Задержку сделать больше - сделано
Варианты ответов выводить в столбик - сделано
Добавить подробные варианты выбора - сделано
Сделать систему барабана револьера - 90/10
*/

/*Hero hero;
	system("cls");
	std::cout << "Перед началом игры необходимо задать базоые навыки для персонаж\n(1 очко = 1 навык)\nКол-во очков = 1\nПрокачать удачу - 1\nПрокачать владение топором - 2\nПрокачать владение револьером - 3\n";
	int choiceStat = 0;
	std::cin >> choiceStat;
	system("cls");
	if (choiceStat == 1)
	{
		hero.lucky++;
		std::cout << "Удача прокачана!!!";
		Sleep(4000);
		system("cls");
	}
	else if (choiceStat == 2)
	{
		hero.axWie++;
		std::cout << "Владение топором прокачано!!!";
		Sleep(4000);
		system("cls");
	}
	else if (choiceStat == 2)
	{
		hero.gunWie++;
		std::cout << "Владние револьером прокачано!!!";
		Sleep(4000);
		system("cls");
	}
*/

int main()
{
	

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Game game;
	game.Menu();
}