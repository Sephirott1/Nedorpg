#include <iostream>
#include <windows.h>
#include "Game.h"

/*
�������� ��������� Hero (������� ������)
��������� ������ - �������
�������� ������� ������ - �������
�������� ������� �������� � ������� - �������
�������� ��������� �������� ������ - �������
������� ������� �������� ��������� - 90/10
*/

/*Hero hero;
	system("cls");
	std::cout << "����� ������� ���� ���������� ������ ������ ������ ��� ��������\n(1 ���� = 1 �����)\n���-�� ����� = 1\n��������� ����� - 1\n��������� �������� ������� - 2\n��������� �������� ���������� - 3\n";
	int choiceStat = 0;
	std::cin >> choiceStat;
	system("cls");
	if (choiceStat == 1)
	{
		hero.lucky++;
		std::cout << "����� ���������!!!";
		Sleep(4000);
		system("cls");
	}
	else if (choiceStat == 2)
	{
		hero.axWie++;
		std::cout << "�������� ������� ���������!!!";
		Sleep(4000);
		system("cls");
	}
	else if (choiceStat == 2)
	{
		hero.gunWie++;
		std::cout << "������� ���������� ���������!!!";
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