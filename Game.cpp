#include "Game.h"
#include <windows.h>

//void heroStat()
//{
//	Hero hero;
//	system("cls");
//	std::cout << "����� ������� ���� ���������� ������ ������ ������ ��� ��������\n(1 ���� = 1 �����)\n���-�� ����� = 1\n��������� ����� - 1\n��������� �������� ������� - 2\n��������� �������� ���������� - 3\n";
//	int choiceStat = 0;
//	std::cin >> choiceStat;
//	system("cls");
//	if (choiceStat == 1)
//	{
//		hero.lucky++;
//		std::cout << "����� ���������!!!";
//		Sleep(4000);
//		system("cls");
//	}
//	else if (choiceStat == 2)
//	{
//		hero.axWie++;
//		std::cout << "�������� ������� ���������!!!";
//		Sleep(4000);
//		system("cls");
//	}
//	else if (choiceStat == 2)
//	{
//		hero.gunWie++;
//		std::cout << "������� ���������� ���������!!!";
//		Sleep(4000);
//		system("cls");
//	}
//}
void Game::Menu()
{
	
	while (true)
	{
		std::cout << "����� �����\n\n(1)������ ����� ����\n(2)������� �����\n(3)����� �� ����\n";
		int NumStart = 0;
		std::cin >> NumStart;
		if (NumStart == 1)
		{
			level1();
		}
		else if (NumStart == 2)
		{
			std::cout << "���������� ������ ������ ������ ��� ��������� (1 ���� = 1 �����)\n���-�� ����� = 1\n��������� ����� - 1\n��������� �������� ������� - 2\n��������� �������� ���������� - 3\n";
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
				while (load < 1 or load > 3)
				{
					std::cout << "������, ����� ������ ����!";
					Sleep(5000);
					continue;
				}
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

void Game::level1()
{
		while (true)
		{
			system("cls");
			std::cout << "�� ����������� � ������ ������������ ���������� ��� ������ � ������� ����� � ������.\n\n1 - ������ ���� \n2 - ����������� ������� ����� \n3 - ������� �� ������" << std::endl;
			int choice = 0;
			std::cin >> choice;
			if (choice == 1)
			{
				system("cls");
				std::cout << "B� ������� ���� � ����� �� ����������";
			}
			else if (choice == 2)
			{
				system("cls");
				std::cout << "����� ���� �������.\n1 - ������ ����    \n2 - ������� �� ������" << std::endl;
				int choice1 = 0;
				std::cin >> choice1;
				if (choice1 == 1)
				{
					system("cls");
					std::cout << "B� ������� ���� � ����� �� ����������" << std::endl;
				}
				else if (choice1 == 2)
				{
					system("cls");
					std::cout << "��� ����� �� �������, ����� ���� �� ������� ������� ������� ������� ����� � ������� ������\n.�� ����� ������� ���� � ��������." << std::endl;
				}
			}
			else if (choice == 3)
			{
				system("cls");
				std::cout << "��� ����� �� �������, ����� ���� �� ������� ������� ������� ������� ����� � ������� ������\n.�� ����� ������� ���� � ��������." << std::endl;
			}
			Sleep(5000);
			system("cls");
			std::cout << "����� ������ �� ������� ������� ������� ������� ����� �� ���\n������� ���������� �� ������������ �����\n1 - ����� �������    \n2 - ������� �������    \n3 - ������ " << std::endl;
			int choice2 = 0;
			std::cin >> choice2;
			if (choice2 == 1)
			{
				system("cls");
				std::cout << "�� ����� � ��� ������� � �������� �, �� ��� ������ � ���������� �� ���.\n1 - ������� �������    \n2 - ������" << std::endl;
				int choice3 = 0;
				std::cin >> choice3;
				if (choice3 == 1)
				{
					system("cls");
					std::cout << "�� ������� �������, �� ����������� ��� �� �������� � ��� ����� �� ��� ������.\n������ �� ���� � �� ������ �� ������� ����� ������ ������ ���� � ������ �������." << std::endl;
				}

			}
			else if (choice2 == 2)
			{
				system("cls");
				std::cout << "�� ������� �������, �� ����������� ��� �� �������� � ��� ����� �� ��� ������\n1 - ����� �������    \n3 - ������ " << std::endl;
				int choice4 = 0;
				std::cin >> choice4;
				if (choice4 == 1)
				{
					system("cls");
					std::cout << "�� ����� � ��� ������� � �������� �, �� ��� ������ � ���������� �� ���, ��� �������!\n�� �������\n������ �� �� ������ ������?\n1 - ��  \n2- ���" << std::endl;
					int starting = 0;
					std::cin >> starting;
					if (starting == 1)
					{
						continue;
					}
					else
					{
						break;
					}

				}
				else
				{
					system("cls");
					std::cout << "�� ������� ������ ���� ������ � ������ �������." << std::endl;
				}
			}
			else
			{
				system("cls");
				std::cout << "�� ������� � ������ � ����� � ������ ������� ������ ����." << std::endl;
			}
			Sleep(3000);
			system("cls");
			std::cout << "����� �� ������� �� ������ �� ������� ����� ����� � ������ �������, ���������� ������ � ����� ������� �� �������.\n1 - �������    \n2 - ������� �������" << std::endl;
			int choice5 = 0;
			std::cin >> choice5;
			if (choice5 == 1)
			{
				system("cls");
				std::cout << "��� ����� � �� ������\n������ ������ ������� ������?\n1 - ��  \n2- ���" << std::endl;
				int starting2 = 0;
				std::cin >> starting2;
				if (starting2 == 1)
				{
					continue;
				}
				else
				{
					break;
				}

			}
			else
			{
				system("cls");
				std::cout << "�� ������� �������." << std::endl;
			}
			system("cls");
			std::cout << "� ������ �� ������ �������� ������ ����� � ��������. ��� �� ��������?\n1 - �����    \n2 - ��������" << std::endl;
			int choice6 = 0;
			std::cin >> choice6;
			if (choice6 == 1)
			{
				system("cls");
				std::cout << "�� ����� �����." << std::endl;
			}
			else
			{
				system("cls");
				std::cout << "�� ����� ��������\n������ ������� �� ��������� �� ��� ������ � ����������� � \n1- ����    \n2 - ������    \n3 - ����" << std::endl;
				int choice7 = 0;
				std::cin >> choice7;
				if (choice7 == 2)
				{
					int luckypatron = rand() % 6;
					if (luckypatron != 1)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 2)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 3)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 4)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 5)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 6)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (hero.lucky == 1)
					{
						std::cout << "��������� ����� ����� ��� �������� ������ � �������� � �� ��������� � �������";
						Sleep(5000);
						system("cls");
						std::cout << "�� ������������ ��� ������\n�� �� ���� ��������� ������ ����� ������� ����� � ������ ����o��";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else
					{
						std::cout << "��� �������� ������ ��������� ���������� ��������";
						Sleep(5000);
						system("cls");
						std::cout << "�� ������������ ��� ������\n�� �� ���� ��������� ������ ����� ������� ����� � ������ ����o��";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
				}
				else if (choice7 == 1)
				{
					int luckypatron = rand() % 6;
					if (luckypatron != 1)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 2)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 3)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 4)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 5)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 6)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (hero.lucky == 1)
					{
						std::cout << "��������� ����� ����� ��� �������� ������ � �������� � �� ��������� � �������";
						Sleep(5000);
						system("cls");
						std::cout << "�� ��� ������ � ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else
					{
						std::cout << "��� �������� ������ ��������� ���������� ��������";
						Sleep(5000);
						system("cls");
						std::cout << "�� ��� ������ � ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
				}
				else if (choice7 == 3)
				{
					int luckypatron = rand() % 6;
					if (luckypatron != 1)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 2)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 3)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 4)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 5)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (luckypatron != 6)
					{
						std::cout << "� ������ �������� �� ���� ������� � ������� ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (hero.lucky == 1)
					{
						std::cout << "��������� ����� ����� ��� �������� ������ � �������� � �� ��������� � �������";
						Sleep(5000);
						system("cls");
						std::cout << "�� ��� ������ � ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else
					{
						std::cout << "��� �������� ������ ��������� ���������� ��������";
						Sleep(5000);
						system("cls");
						std::cout << "�� ��� ������ � ����� ���";
						Sleep(5000);
						system("cls");
						std::cout << "\n�� �������!\n������ �� �� ������ ������� �������? \n1 - �� \n2 - ���" << std::endl;
						int starting3 = 0;
						std::cin >> starting3;
						if (starting3 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
				}
			}
			Sleep(3000);
			system("cls");
			std::cout << "\n������ ������� �� ������������� ������� ���� �� ������ ����\n1- ����    \n2 - ������    \n3 - ����" << std::endl;
			int choice8 = 0;
			std::cin >> choice8;

			if (choice8 == 1)
			{
				system("cls");
				std::cout << "�� ������� ������� ������� �� ��� ���������� �� ���\n�� �������!\n������ �� �� ������ ������� �������?\n1 - �� \n2- ���" << std::endl;
				int starting3 = 0;
				std::cin >> starting3;
				if (starting3 == 1)
				{
					continue;
				}
				else
				{
					break;
				}
			}
			else if (choice8 == 2)
			{
				system("cls");
				std::cout << "������� ����� � �������.\n���� �������� ������� ���������� �� 1" << std::endl;

			}
			else if (choice8 == 3)
			{
				system("cls");
				std::cout << "������� �����, �� ������� � ��� � ������� ��� �� ����, �� ��������� � ������ ����� � ������ �������! \n�� �������!\n������ �� �� ������ ������� �������?\n1 - �� \n2- ���" << std::endl;
				int starting4 = 0;
				std::cin >> starting4;
				if (starting4 == 1)
				{
					continue;
				}
				else
				{
					break;
				}

			}
			Sleep(2000);
			system("cls");
			std::cout << "��� ������ ����� ���� �� ���������� � �� ����������� � ���.\n����� 1 �����." << std::endl;
			Sleep(5000);
			system("cls");
			std::cout << "������ �� �� ���������� ���� � ������� �� 2 �����?\n(1) - ��\n(2) - ���\n";
			int golevel = 0;
			std::cin >> golevel;
			if (golevel == 1)
			{
				level2();
			}
			else
			{
				break;
			}
		}
}

void Game::level2()
{
	while (true)
	{
		system("cls");
		std::cout << "������ ������ �����!" << std::endl;
		std::cout << "�� ����� ��� �� ����, �� ������ � ��������� ���� � �������!\n�� ��������� � ������ � ������ �� ������.\n���� ��� ����� � �� ������ 2-�� ������.\n� ������ �� ��� ��� ���� ����� � �����.\n";
		std::cout << "��� �� �������� � �������\n1 - ��� �� ?    \n2 - ��� � ����� �����    \n3 - ����������\n";
		int choice = 0;
		std::cin >> choice;
		if (choice == 1)
		{
			system("cls");
			std::cout << "���� �������: ��� �� ��� ���� ������ ������? � ���� ����!\n";
			std::cout << "1 - � �� ����� ������.    \n2 - ������� ����. ����!\n";
			std::cin >> choice;
			if (choice == 1)
			{
				system("cls");
				std::cout << "���� �������: ��� � � ����. ���� �� �� ������ �� ����� ���� ������� ���� ������� � ���� �� ��������.\n";
				std::cout << "1 - ����� ��� ��� ��� � ���� ����, � �� ��.....    \n2 - ����\n";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "�����������: � ����� ����� ���� ����� � ��� �� �������, ��� ��� ����� ��������� � ���!\n\n�� ��������� ���� �������.\n�� �������!\n������ �� �� ������ ����� 2 �������?\n1 - �� \n2 - ���)\n";
					int starting = 0;
					std::cin >> starting;
					if (starting == 1)
					{
						continue;
					}
					else
					{
						break;
					}
				}
				else if (choice == 2)
				{
					std::cout << "������. � ����.";
				}
			}
			else if (choice == 2)
			{
				system("cls");
				std::cout << "�����������: � ����� ����� ���� ����� �� �������, ��� ��� ����� ��������� � ���!\n\n�� ��������� ���� �������.\n�� �������!\n������ �� �� ������ ����� 2 �������?\n1 - �� \n2 - ���\n";
				int starting = 0;
				std::cin >> starting;
				if (starting == 1)
				{
					continue;
				}
				else
				{
					break;
				}
			}
		}
		else if (choice == 2)
		{
			system("cls");
			std::cout << "�����������: �� ����� ���� ��� �������� ������, �� ������ ���������������� � ����� ��������� �� �� ���.\n";
			std::cout << "1 - � ��� �� ���� ��� �. ���� ������� ����!   \n2 - � ������ � ���� �� �����.\n";
			std::cin >> choice;
			if (choice == 1)
			{
				system("cls");
				std::cout << "�����������: � ����� ����� ���� ����� �� �������, ��� ��� ����� ��������� � ���!\n\n�� ��������� ���� �������.\n�� �������!\n������ �� �� ������ ����� 2 �������?\n1 - �� \n2 - ���\n";
				int starting = 0;
				std::cin >> starting;
				if (starting == 1)
				{
					continue;
				}
				else
				{
					break;
				}
			}
			else if (choice == 2)
			{
				system("cls");
				std::cout << "����������� : � ��� � ���� ��� ������ , �� �� ��� ���..... � ����� ������ ������ �����. ������� � ���� ����� ���� ������ �����.";
				Sleep(8000);
			}
		}
		else if (choice == 3)
		{
			system("cls");
			std::cout << "�����������: ������ ��� ��?\n";
			std::cout << "1 - ��� ����� ������?    \n2 - ������� ����. ����!    \n3 - � ������ �� ����� � ����.\n";
			std::cin >> choice;
			if (choice == 1)
			{
				system("cls");
				std::cout << "�����������: ��� � � ����, �� ���� ����� �� ����. ������ �� ��� ����� �� �����, ��� ��� ����� ���� �� �� ����������.";
				std::cout << "1 - ����� ���� \n2 - ��������� �������� � ������\n3 - ��������� ����� � �������";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "�� ���� �� ����� �� ������������ ��� ��������.\n�� �������!\n������ �� �� ������ ����� 2 �������?\n1 - �� \n2 - ���\n";
					int starting = 0;
					std::cin >> starting;
					if (starting == 1)
					{
						continue;
					}
					else
					{
						break;
					}
				}
				else if (choice == 2)
				{
					system("cls");
					std::cout << "�����������: ����� ���� ���� ������� � ��� ������� ���� ����� � ��� � ��� ���������� �������������� ������������, � ���� ��� �����������.";
				}
				else if (choice == 3)
				{
					system("cls");
					std::cout << "�����������: � �� ���� �� �� ��� ���, �� ��� ����� ������.";
					std::cout << "\n1 - � �� ����� ������.    \n2 - ��������� ����\n";
					std::cin >> choice;
					if (choice == 1)
					{
						std::cout << "���� �������: � ����� ������ ������� � ��������� ���� �� ����� �����, ����� ������ ���� ���� ���� � ������ �����.";
					}
					else
					{
						std::cout << "���� �������: � ����� ������ ������� � ��������� ���� �� ����� �����, ����� ������ ���� ���� ���� � ������ �����.";
					}
				}
			}
			else if (choice == 2)
			{
				system("cls");
				std::cout << "�����������: �� ���� �� ��� ���, ��� ��� �������� �� ����� ��� ��� ����� ����������!";
				std::cout << "\n1 - ��� �������, ��� ���?!    \n2 - ����� ����\n";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "�����������: � ����� ����� ���� ����� �� �������, ��� ��� ����� ��������� � ���!\n\n�� ��������� ����������.\n�� �������!\n������ �� �� ������ ����� 2 �������?\n1 - �� \n2 - ���\n";
					int starting2 = 0;
					std::cin >> starting2;
					if (starting2 == 1)
					{
						continue;
					}
					else
					{
						break;
					}
				}
				if (choice == 1)
				{
					system("cls");
					std::cout << "�� ����, �� ����� �� ������������ ��� ��������.\n�� �������!\n������ �� �� ������ ����� 2 �������? \n1 - �� \n2 - ���\n";
					std::cout << "";
					int starting2 = 0;
					std::cin >> starting2;
					if (starting2 == 1)
					{
						continue;
					}
					else
					{
						break;
					}
				}

			}
		}
		system("cls");
		std::cout << "�� ����� �� ������ � ������ ������� �� ����� ����� ����� ��� ������ � ��������� � ��� �����.\n1 - � ��� ���� ��������� ��� �����?\n2 - ����������\n";
		std::cin >> choice;
		system("cls");
		if (choice == 1)
		{
			std::cout << "����� : �� ������ ���� � ���� ������ � � ��� ����� ��������\n� �� ����� ������ � ������� �� ����� , � �������� � ���� ��� �����.";
			Sleep(8000);
			system("cls");
		}
		else if (choice == 2)
		{
			std::cout << "����� : ���� ������ �� ��������� � ��� ���� ��������� ����?\n1 - �� ��� ��� �����\n2 - ��� ���������,� ������ � ��� �������� ���\n";
			std::cin >> choice;
			if (choice == 1)
			{
				std::cout << "����� : ��� � � ����� ����� ��������� ���� � ����� �� ������ �����";
				Sleep(8000);
				system("cls");
				std::cout << "�� ������� ���������� � ������ � �� ��� ����\n�� �������!\n������ �� �� ������ ����� 2 �������? \n1 - �� \n2 - ���\n";
				std::cout << "";
				int starting9 = 0;
				std::cin >> starting9;
				if (starting9 == 1)
				{
					continue;
				}
				else
				{
					break;
				}
			}
			else if (choice == 2)
			{
				std::cout << "����� : � ���� ������ � ��� ����� ������� , �� ����� ������...... � �� ����� , �� ���� �� �� ��������...\n";
				Sleep(8000);
				system("cls");
			}
		}
		std::cout << "�� ��������� ������� ��� ��������...";
		Sleep(4000);
		system("cls");
		std::cout << "���� �������: �� ��, ������!\n";
		std::cout << "1 - �����������    \n2 - ���������� ����\n";
		std::cin >> choice;
		if (choice == 1)
		{
			system("cls");
			std::cout << "������ ���� ���� ��� ����� ����� ����� ���, ������ ��� ����� ���� � �������� ������������� �� ���� ��������.\n";
			Sleep(5000);
			std::cout << "������: ������ � ��� ��������, �������� ��� � �������� ������� ������ ����.";
			Sleep(5000);
		}
		else if (choice == 2)
		{
			system("cls");
			std::cout << "���� �������: � �� ������ ������! �� ��� ������ ������???\n";
			std::cout << "\n1 - ��    \n2 - ��������";
			std::cin >> choice;
			system("cls");
			std::cout << "\n���� �������: ����� � ������ ������ � ���� ��� ��� �������. ������ ���� ���� ��� ����� ����� ����� ���, ������ ��� ����� ���� � �������� ������������� �� ���� ��������.";
			Sleep(5000);
			std::cout << "\n������: ������ � ��� ��������, �������� ��� � �������� ������� ������ ����.";
			Sleep(5000);
		}
		system("cls");
		std::cout << "���� �������: ���� ��� �� � ���� ���� ������� � ���� ������. ������ ��� ��� ������ ����� ���� ������ �������� � ����� ��������.\n� ���� �� ���� ��� �� �� ������.\n� ����� ������ � ���� ��������� ������������ ����. \n��������� ��� �������� ��� ���� ��������� ���� ������������ �� ����� ������.\n� ��� �������� ��� �� �� �������� ������ ����������� � ������ ���� ��������� ���� ��� ��� �� �����.\n����� ������ ��� �� ���� � �� �� ���� ������ ����� ��� ������� ��� ���.\n���� ������ ��� ����� �� ���������� �� ������ ���� ���� ������, � ��� � ������ ��� �� ������ ������ ������� � ���� ���� �� ������� ���� �� ����� ��\n�� ������������ � ��������.";
		Sleep(45000);
		std::cout << "\n������: � ��� �����. � ���������� ���� � ����� ������ ���� ���� �� ������� ��.....\n";
		Sleep(6000);
		system("cls");
		std::cout << "���� �������: ����..... �� ����������... ������ ��� ��� ������� ����� ����� ���.\n";
		Sleep(6000);
		std::cout << "������: ������. � �����.\n";
		Sleep(3000);
		system("cls");
		std::cout << "� �������� �� ����� ����� �� ������� ��� ���� � ��������. � �� ����������� � ����.\n";
		Sleep(5000);
		system("cls");
		std::cout << "�� ������ ������ ������ � ��� ����������� ������� � ����� ����������� ������, �� ������������ �� �������� �� ������� �� ����� ������,\n ��� ������� �������� �������� �������������.\n�� �� ���������� ���� ���� ��������, ���� � �����.\n��� �� ������� ����������?\n(1) - ��������\n(2) - ����\n(3) - �����\n";
		int locgo = 0;
		std::cin >> locgo;
		if (locgo == 1)
		{
			int eat = rand() % 100;
			if (eat < 50)
			{
				system("cls");
				std::cout << "�� �� ����� ���. ��� ����� �������� � ������ �������\n(1) - ����\n(2) - �����\n";
				std::cin >> locgo;
				if (locgo == 1)
				{
					int eat2 = rand() % 100;
					if (eat2 < 50)
					{
						system("cls");
						std::cout << "�� �� ����� ���. ��� ����� �������� � ������ �������\n(1) - �����\n";
						std::cin >> locgo;
						if (locgo == 1)
						{
							int eat3 = rand() % 100;
							if (eat2 < 50)
							{
								system("cls");
								std::cout << "� ��������� �� �� ����� ��� �� � ����� �������.�� � ������ �� ������� 2 �������� ������ � ���� ����-����.\n����� ��� ������ ����� ������� �� ���������.";
								Sleep(4000);
							}
							else if (eat2 > 50)
							{
								system("cls");
								std::cout << "�� ����� ��� � ����� ��� ������ ����� ������� �� ��������.";
								Sleep(2000);
							}
						}

					}
				}
				else if (locgo == 2)
				{
					int eat2 = rand() % 100;
					if (eat2 < 50)
					{
						system("cls");
						std::cout << "�� �� ����� ���. ��� ����� �������� � ������ �������\n(1) - ����\n";
						std::cin >> locgo;
						if (locgo == 1)
						{
							int eat3 = rand() % 100;
							if (eat2 < 50)
							{
								system("cls");
								std::cout << "�� �� ����� ��� �� � ����� ������� � ���������. �� � ������ �� ������� 2 �������� ������ � ���� ����-����.\n����� ��� ������ ����� ������� �� ��������.";
								Sleep(6000);
							}
							else if (eat > 50)
							{
								system("cls");
								std::cout << "�� ����� ��� � ������ ����������� � ��������.";
								Sleep(2000);
							}
						}

					}
					else if (eat > 50)
					{
						system("cls");
						std::cout << "�� ����� ��� � ������ ����������� � ��������.";
						Sleep(2000);
					}
				}
			}
			else if (eat > 50)
			{
				system("cls");
				std::cout << "�� ����� ��� � ������ ����������� � ��������.";
				Sleep(2000);
			}
		}
		else if (locgo == 2)
		{
			int eat = rand() % 100;
			if (eat < 50)
			{
				system("cls");
				std::cout << "�� �� ����� ���. ��� ����� �������� � ������ �������\n(1) - ��������\n(2) - �����\n";
				std::cin >> locgo;
				if (locgo == 1)
				{
					int eat2 = rand() % 100;
					if (eat2 < 50)
					{
						system("cls");
						std::cout << "�� �� ����� ���. ��� ����� �������� � ������ �������\n(1) - �����\n";
						std::cin >> locgo;
						if (locgo == 1)
						{
							int eat3 = rand() % 100;
							if (eat2 < 50)
							{
								system("cls");
								std::cout << "� ���������. �� �� ����� ��� �� � ����� �������. �� � ������ �� ������� 2-� �������� ������ � ���� ����-����.\n����� ��� ������ ����� ������� �� ��������.";
								Sleep(5000);
							}
							else if (eat > 50)
							{
								system("cls");
								std::cout << "�� ����� ��� � ������ ����������� � ��������.";
								Sleep(2000);
							}
						}

					}
					else if (eat > 50)
					{
						system("cls");
						std::cout << "�� ����� ��� � ������ ����������� � ��������.";
						Sleep(2000);
					}
				}
				else if (locgo == 2)
				{
					int eat2 = rand() % 100;
					if (eat2 < 50)
					{
						system("cls");
						std::cout << "�� �� ����� ���. ��� ����� �������� � ������ �������\n(1) - �����\n";
						std::cin >> locgo;
						if (locgo == 1)
						{
							int eat3 = rand() % 100;
							if (eat2 < 50)
							{
								system("cls");
								std::cout << "�� �� ����� ��� �� � ����� ������� � ���������. �� � ������ �� ������� 2-� �������� ������ � ���� ����-����.\n����� ��� ������ ����� ������� �� ��������.";
								Sleep(5000);
							}
							else if (eat > 50)
							{
								system("cls");
								std::cout << "�� ����� ��� � ������ ����������� � ��������.";
								Sleep(2000);
							}
						}

					}
					else if (eat > 50)
					{
						system("cls");
						std::cout << "�� ����� ��� � ������ ����������� � ��������.";
						Sleep(2000);
					}
				}
			}
			else if (eat > 50)
			{
				system("cls");
				std::cout << "�� ����� ��� � ������ ����������� � ��������.";
				Sleep(2000);
			}
		}
		else if (locgo == 3)
		{
			int eat = rand() % 100;
			if (eat < 50)
			{
				system("cls");
				std::cout << "�� �� ����� ���. ��� ����� �������� � ������ �������\n(1) - ��������\n(2) - ����\n";
				std::cin >> locgo;
				if (locgo == 1)
				{
					int eat2 = rand() % 100;
					if (eat2 < 50)
					{
						system("cls");
						std::cout << "�� �� ����� ���. ��� ����� �������� � ������ �������\n(1) - ����\n";
						std::cin >> locgo;
						if (locgo == 1)
						{
							int eat3 = rand() % 100;
							if (eat2 < 50)
							{
								system("cls");
								std::cout << "� ��������� �� �� ����� ��� �� � ����� �������. �� � ������ �� ������� 2-� �������� ������ � ���� ����-����.\n����� ��� ������ ����� ������� �� ��������.";
								Sleep(6000);
							}
							else if (eat > 50)
							{
								system("cls");
								std::cout << "�� ����� ��� � ������ ����������� � ��������.";
								Sleep(2000);
							}
						}

					}
					else if (eat > 50)
					{
						system("cls");
						std::cout << "�� ����� ��� � ������ ����������� � ��������.";
						Sleep(2000);
					}
				}
				else if (locgo == 2)
				{
					int eat2 = rand() % 100;
					if (eat2 < 50)
					{
						system("cls");
						std::cout << "�� �� ����� ���. ��� ����� �������� � ������ �������\n(1) - ��������\n";
						std::cin >> locgo;
						if (locgo == 1)
						{
							int eat3 = rand() % 100;
							if (eat2 < 50)
							{
								system("cls");
								std::cout << "� ��������� �� �� ����� ��� �� � ����� �������. �� � ������ �� ������� 2-� �������� ������ � ���� ����-����.\n����� ��� ������ ����� ������� �� ���������.";
								Sleep(5000);
							}
							else if (eat > 50)
							{
								system("cls");
								std::cout << "�� ����� ��� � ������ ����������� � ��������.";
								Sleep(2000);
							}
						}

					}
					else if (eat > 50)
					{
						system("cls");
						std::cout << "�� ����� ��� � ������ ����������� � ��������.";
						Sleep(2000);
					}
				}
			}
			else if (eat > 50)
			{
				system("cls");
				std::cout << "�� ����� ��� � ������ ����������� � ��������.";
				Sleep(2000);
			}
		}
		system("cls");
		std::cout << "�� ����������� � ��������� � ��������\n����������� � 3 ��������� �����." << std::endl;
		Sleep(3000);
		system("cls");
		std::cout << "������ �� �� ���������� ���� � ������� �� 3 �����?\n(1) - ��\n(2) - ���\n";
		int golevel = 0;
		std::cin >> golevel;
		if (golevel == 1)
		{
			level3();
			break;
		}
		else
		{
			break;
		}
	}
}

void Game::level3()
{
	while (true)
	{
		system("cls");
		std::cout << "������ ���� ����� � ������ �������� � ��������.\n������ ����� ���� ������ ��� ������ ������ �� ���������� ���������� ����� ��������\n1 - ������� �� ������    \n2 - ����� ������    \n3 - ������� ����� �����\n";
		int choice = 0;
		std::cin >> choice;
		if (choice == 1)
		{
			system("cls");
			std::cout << "�� ��������� �������� ��������� ���������� ����� � ��� ����������� ���� ������\n�� ������!\n������ ������ 3 ����� ������?\n1 - ��  \n2 - ���)\n";
			int starting = 0;
			std::cin >> starting;
			if (starting == 1)
			{
				continue;
			}
			else
			{
				break;
			}
		}
		else if (choice == 2)
		{
			system("cls");
			std::cout << "�� ������� ����� ������";
			Sleep(5000);
			system("cls");
			std::cout << "����� � ��� �� ������� 2 ����� � ������� �����\n1 - ���� � �����    \n2 - ������� � ������� ����....\n";
			std::cin >> choice;
			if (choice == 1)
			{
				system("cls");
				std::cout << "�� ��� ������ ����� ��� �� ��������? \n1 - ���� ����� 2 ����� ������� \n2 - ���������� � �������� ������\n";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "�� ����� 2 ����� ����� ������ � ������ ��������� ���� �����, �� ������� �������� ���������� �����\n1 - ����� � �����    \n2 - ���������� � ������ �����\n";
					std::cin >> choice;
					if (choice == 1)
					{
						system("cls");
						std::cout << "�� ������ �������� ������� ���-�� ������� ��������� ������ ������ �������� �������.\n�� � ����� �� ���� ������ ������ � �������!\n�� �������!\n������ ������ 3 ����� ������?1 - �� \n2 - ���\n";
						int starting2 = 0;
						std::cin >> starting2;
						if (starting2 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (choice == 2)
					{
						system("cls");
						std::cout << "�� ������� ����� � ������, �� ��� ������� ���� �� ����� ����� � ������� ������\nO� ������� �� ����� �����.";
					}
					Sleep(10000);
					system("cls");
					std::cout << "����� ������ ���� � ��� �������� ����� �� ������ ����";
					Sleep(2000);
					system("cls");
					std::cout << "�� ��� ����� �����!!!\n1 - ����������    \n2 - �������    \n3 - ������� �� ������\n";
					std::cin >> choice;
					if (choice == 1)
					{
						system("cls");
						std::cout << "�� ���������� �����, �� � ��������� ������ �� ������ ���!\n��� �� ��������?\n1 - ������� �����    \n2 - ���������� ������ ��������\n";
						std::cin >> choice;
						if (choice == 1)
						{
							system("cls");
							std::cout << "�� ������� � ������ ���� �� ����������� �������� - �� ����� � ������, �� ������ ������� ��-�� ���� ,��� ������ ����� �������";
							Sleep(10000);
							break;
						}
						else if (choice == 1)
						{
							system("cls");
							std::cout << "�� ����� �� �������� �������� ������ � ����� ��� ��� �� �������.";
						}

					}
					else if (choice == 2)
					{
						system("cls");
						std::cout << "�� ������� ����� �������, �� � ��������� ������ \n�� ������ ���!\n��� �� ��������?\n1 - ������� �����    \n2 - ���������� ������ ��������\n";
						std::cin >> choice;
						if (choice == 1)
						{
							system("cls");
							std::cout << "�� ������� � ������ ���� �� ����������� �������� - �� ����� � ������, �� ������ ������� �� �� ���� ��� ������ ����� �������";
							Sleep(10000);
							break;
						}
						else if (choice == 1)
						{
							system("cls");
							std::cout << "�� ����� �� �������� �������� ������ � ����� ��� ��� �� �������.";
						}
					}
					else if (choice == 3)
					{
						system("cls");
						std::cout << "��� ����� �� ������� � ����� ����� ���.\n�� �������!\n������ ������ 3 ����� ������?\n1 - �� \n2 - ���)\n";
						int starting4 = 0;
						std::cin >> starting4;
						if (starting4 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
				}
				else if (choice == 2)
				{
					system("cls");
					std::cout << "�� ������ ��������� ���� �����, �� ������� �������� ���������� �����.\n1 - ����� � �����    \n2 - ���������� � ������ �����\n";
					std::cin >> choice;
					if (choice == 1)
					{
						system("cls");
						std::cout << "�� ������ �������� ������� ���-�� ������� ��������� ������ ������ �������� �������\n�� � ����� �� ���� ������ ������ � �������.\n�� �������!\n������ ������ 3 ����� ������?\n1 - �� \n2 - ���\n";
						int starting2 = 0;
						std::cin >> starting2;
						if (starting2 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
					else if (choice == 2)
					{
						system("cls");
						std::cout << "�� ������� ����� � ������, �� ��� ������� ���� �� ����� ����� � ������� ������\n�� ������� �� ����� �����.";
					}
					system("cls");
					std::cout << "����� ������ ���� � ��� �������� ����� �� ������ ����\n";
					Sleep(8000);
					system("cls");
					std::cout << "�� ��� ����� �����!!!\n1 - ����������    \n2 - �������    \n3 - ������� �� ������\n";
					std::cin >> choice;
					if (choice == 1)
					{
						system("cls");
						std::cout << "�� ���������� �����, �� � ��������� ������ �� ������ ���!\n��� �� ��������?\n1 - ������� �����    \n2 - ���������� ������ ��������\n";
						std::cin >> choice;
						if (choice == 1)
						{
							system("cls");
							std::cout << "�� ������� � ������ ���� �� ����������� �������� - �� ����� � ������, �� ������ ������� �� �� ���� ��� ������ ����� �������.";
							Sleep(10000);
							continue;
						}
						else if (choice == 1)
						{
							system("cls");
							std::cout << "�� ����� �� �������� �������� ������ � ����� ��� ��� �� �������.";
						}

					}
					else if (choice == 2)
					{
						system("cls");
						std::cout << "�� ������� ����� �������, �� � ��������� ������ �� ������ ���.\n��� �� ��������?\n1 - ������� �����    \n2 - ���������� ������ ��������\n";
						std::cin >> choice;
						if (choice == 1)
						{
							system("cls");
							std::cout << "�� ������� � ������ ���� �� ����������� �������� - �� ����� � ������, �� ������ ������� �� �� ���� ��� ������ ����� �������";
							Sleep(10000);
							break;
						}
						else if (choice == 1)
						{
							system("cls");
							std::cout << "�� ����� �� �������� �������� ������ � ����� ��� ��� �� �������.";
						}
					}
					else if (choice == 3)
					{
						system("cls");
						std::cout << "��� ����� �� ������� � ����� ����� ���.\n�� �������!\n������ ������ 3 ����� ������?\n1 - �� \n2 - ���\n";
						int starting4 = 0;
						std::cin >> starting4;
						if (starting4 == 1)
						{
							continue;
						}
						else
						{
							break;
						}
					}
				}
				Sleep(5000);
				system("cls");
				std::cout << "� ��� ���� ����� �� - �� ���� �� ������ ���������� ����\n������ ����� ��� ��� �����, �� ������� ��������� ����� �������� � �������� ���������� �������, ��� ��� ���� ���. ";
				Sleep(10000);
				system("cls");
				std::cout << "������ ����� ��� ������.\nO���������� ������ ��� ����� �������� ��������� �������, � � ���� ��������� ���\n��������� �� ������";
				Sleep(10000);
				system("cls");
				std::cout << "������������ ������ �� ��������� ������ ��������.";
				Sleep(8000);
				system("cls");
				std::cout << "����������� �������: ���....������!!!!!?????\n";
				std::cout << "1 - �������� � �� C�����, � ��� ��� ��� ���� ���    \n2 - ��� ��?\n";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "�����: ������ ��� �� ������ ������ ������ ����? ��� � �����! \n��� �� ��� ������?\n �� �� �������� � ����� � ����� �����������.";
				}
				else if (choice == 2)
				{
					system("cls");
					std::cout << "�����: ������ ��� � �����! ��� �� ��� ������?\n �� �� �������� � ����� � ����� �����������." << std::endl;
				}
				Sleep(10000);
				system("cls");
				Sleep(5000);
				std::cout << "������: ����� ��� �� �� �� ����, � �� ����� � ���� ������ � ���� ������� ��� ����� � ������.\n��� ����� ������� �� ����� ������, ���� �������� ������ � � ���� ��� �������� ����� ������.\n" << std::endl;
				Sleep(8000);
				system("cls");
				std::cout << "�����: ����� ���� �� ���.\n���� ��������� ������ ������� ������.\n���� ���� � ���� ������, � ����� ��� ���� ����!" << std::endl;
				Sleep(10000);
				system("cls");
				std::cout << "������: ��....���?\n �� ��� ����� ��� ���� �� ����� ��� ��� �?! " << std::endl;
				Sleep(5000);
				system("cls");
				std::cout << "�����: ������ ��� ����, � �� ���� ��� ��� ���������. ����, � ��� � ����� �����?\n";
				std::cout << "1 - ���� �������. ��� �������� �� �����....    \n2 - �� ��� ������, �����������";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "�����: � ��� ������ ��� ����, ����";
					Sleep(4000);
					system("cls");
					std::cout << "���������� � ����� ��������: �����! ������ ������, �� ����������� ��� �������� ��� �����!!!!\n";
					std::cout << "1 - � ���! �� ����, ��� ����� ����� � � �� ����������!    \n2 - ������� ���� ������.....";
					std::cin >> choice;
					system("cls");
					std::cout << "���������� � ����� ��������: ������ ������, �� � �� ���� � �� ���� ����������� ����� ����� ���������\n";
					Sleep(5000);
					system("cls");
					std::cout << "*�������*\n";
					Sleep(5000);
					system("cls");
					std::cout << "�� ������ ���� �� ������� �������� - �� ������ ����� ����� ��������, �� �� ������ ����������� � �������....";
					Sleep(10000);
					break;
				}
				else if (choice == 2)
				{
					std::cout << "�����: �, ����� ������. � �������� ��� ��� ����.\n��� �� ����������� ������ ������ ������?";
					std::cout << "\n1 - ���� �������� ���.    \n2 - � ������ ������� ������ ���� � ����� �����.";
					std::cin >> choice;
					if (choice == 1)
					{
						system("cls");
						std::cout << "�� ������� ��� 4 ���.\n���� ��������� ����� ���������� � ��� ������ ��� ��� �������.";
						Sleep(8000);
						system("cls");
						std::cout << "�� ������ ���� �� ������ �������� - �� ������� ������ ������� � �������� � ������ �������� ��� ����� ���������� �� ���������.";
						Sleep(10000);
						break;
					}
					else if (choice == 2)
					{
						system("cls");
						std::cout << "�������� ���� ��� ������� ��������.\n�� ��������� ������ ����� � ���� � ���� ������.\n������� �� ����� ���� ��������� ���� ����� ������. \n����� �� ������ �� ���������� �� ������ ���� � �����. \n���������� ��� ��������� ���� �������� � � ������ ��������� �� ������ ��� ���.\n����� ������ ������ �� ���� ��������� �����, � ������ ������������.\n����� ����";
						Sleep(100000);
						std::cout << "�� ������ ���� �� ������� �������� - �� ��������� ���� ����� ��������, �� ��������� ��������� �������� � ������� ����� ����� ������� ���������� �����";
						Sleep(10000);
						break;
					}
				}

			}
			else if (choice == 2)
			{
				system("cls");
				std::cout << "�� ������ ���� �� ����������� �������� - �� ������ ������� ���� ������� ��� ������� ���� �������.";
				Sleep(10000);
				break;
			}
		}
		else if (choice == 3)
		{
			system("cls");
			std::cout << "�� ����������� �� �������� �� �����\n";
			Sleep(5000);
			system("cls");
			std::cout << "�� ���������� �� ����� � �� ����� �� ���\n 1 - ������� �������    \n2 - ������";
			std::cin >> choice;
			if (choice == 1)
			{
				system("cls");
				std::cout << "����� ����������� � ��� �� ��� � ������� � ����� ������� ������ � ��� ���� � �����. �� �������� ����������.";
				Sleep(8000);
				system("cls");
				std::cout << "�������� ���������� \n��� �� ������ ������?\n1 - ������ ������    \n2 - ��������� � �����    \n3 - �������� �� ������";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "������ �� ������� �� �������� ��������";
					Sleep(5000);
					system("cls");
					std::cout << "�� ������ �� ����������� �������� - ������ �� ��������� �� �������.";
					Sleep(10000);
					break;
				}
				else if (choice == 2)
				{
					system("cls");
					std::cout << "�� ������� �� �������!";
					Sleep(5000);
					system("cls");
					std::cout << "�� ������ �� ����������� �������� - ������ �� ��������� �� �������.";
					Sleep(10000);
					break;
				}
				else if (choice == 3)
				{
					system("cls");
					std::cout << "����� ������ ����� � ������ ��������� ������ �����\n�� ������� ����-�� �� ������ ������, �� �� ����� �������\n������ �� ������� �� �������� ��������.";
					Sleep(8000);
					system("cls");
					std::cout << "�� ������ �� ����������� �������� - ������ �� ��������� �� �������, �� ������ ��� �������� �� �������";
					Sleep(10000);
					break;
				}
			}
			else if (choice == 2)
			{
				system("cls");
				std::cout << "�� ������ ������� �������, �� ����� � ����� � �� ���� ������ ��� �����. ��� ������� �� ������ ��������� ����\n 1 - ���������    \n2 - ������";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "� ������������ ����� �� �� ������ �������� � �������!\n";
					Sleep(8000);
					system("cls");
					std::cout << "�� ������ �� ����������� �������� - ������ �� ��������� �� �������.";
					Sleep(10000);
					break;
				}
			}
		}
	}
}
