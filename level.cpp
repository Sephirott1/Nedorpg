#include "levels.h"
void level1()
{
	while (true)
	{
		system("cls");
		std::cout << "�� ����������� � ������ ������������ ���������� ��� ������ � ������� ����� � ������\n\n1 - ������ ����    2 - ����������� ������� �����    3 - ������� �� ������" << std::endl ;
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
			std::cout << "����� ���� �������\n1 - ������ ����    2 - ������� �� ������" << std::endl;
			int choice1 = 0;
			std::cin >> choice1;
			if (choice1 == 1)
			{
				system("cls");
				std::cout << "B� ������� ���� � ����� �� ����������" << std::endl;
			}
			else if(choice1 == 2)
			{
				system("cls");
				std::cout << "��� ����� �� ������� , ����� ���� �� ������� ������� ������� ������� ����� � ������� ������\n.�� ����� ������� ���� � ��������" << std::endl;
			}
		}
		else if (choice == 3)
		{
			system("cls");
			std::cout << "��� ����� �� ������� , ����� ���� �� ������� ������� ������� ������� ����� � ������� ������\n.�� ����� ������� ���� � ��������" << std::endl;
		}
		Sleep(5000);
		system("cls");
		std::cout << "����� ������ �� ������� ������� ������� ������� ����� �� ���\n������� ���������� �� ������������ �����\n1 - ����� �������    2 - ������� �������    3 - ������ " << std::endl;
		int choice2 = 0;
		std::cin >> choice2;
		if (choice2 == 1)
		{
			system("cls");
			std::cout << "�� ����� � ��� ������� � �������� �� �� ��� ������ � ���������� �� ���\n1 - ������� �������    2 - ������" << std::endl;
			int choice3 = 0;
			std::cin >> choice3;
			if (choice3 == 1)
			{
				system("cls");
				std::cout << "�� ������� ������� , �� ����������� ��� �� �������� � ��� ����� �� ��� ������.\n������ �� ���� � �� ������ �� ������� ����� ������ ������ ���� � ������ �������" << std::endl;
			}

		}
		else if (choice2 == 2)
		{
			system("cls");
			std::cout << "�� ������� ������� , �� ����������� ��� �� �������� � ��� ����� �� ��� ������\n1 - ����� �������    3 - ������ " << std::endl;
			int choice4 = 0;
			std::cin >> choice4;
			if (choice4 == 1)
			{
				system("cls");
				std::cout << "�� ����� � ��� ������� � �������� �� �� ��� ������ � ���������� �� ���, ��� �������\n�� �������\n������ �� �� ������ ������(1 - �� , 2- ���)" << std::endl;
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
				std::cout << "�� ������� ������ ���� ������ � ������ �������" << std::endl;
			}
		}
		else
		{
			system("cls");
			std::cout << "�� ������� � ������ � ����� � ������ ������� ������ ����" << std::endl;
		}
		Sleep(3000);
		system("cls");
		std::cout << "����� �� ������� �� ������ �� ������� ����� ����� � ������ ������� ���������� ������ � ����� ������� �� �������\n 1 - �������    2 - ������� �������" << std::endl;
		int choice5 = 0;
		std::cin >> choice5;
		if (choice5 == 1)
		{
			system("cls");
			std::cout << "��� ����� � �� ������\n������ ������ ������� ������?(1 - �� , 2- ���)" << std::endl;
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
			std::cout << "�� ������� �������" << std::endl;
		}
		system("cls");
		std::cout << "� ������ �� �� ������ �������� ������ ����� � �������� .��� �� ��������?\n1 - �����    2 - ��������" << std::endl;
		int choice6 = 0;
		std::cin >> choice6;
		if (choice6 == 1)
		{
			system("cls");
			std::cout << "�� ����� �����" << std::endl;
		}
		else
		{
			system("cls");
			std::cout << "�� ����� ��������\n������ ������� �� ��������� �� ��� ������ � ����������� � \n1- ����    2 - ������    3 - ����" << std::endl;
			int choice7 = 0;
			std::cin >> choice7;
			if (choice7 == 1)
			{
				system("cls");
				std::cout << "�� ���������� �� �������� ������� � ��� ���������� �� ��� \n������ � ���� ������ � ����� � ������ �������\n�� �������\n������ �� �� ������ ������� �������" << std::endl;
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
			else if (choice7 == 2)
			{
				system("cls");
				std::cout << "������� ����� � ������� ,�� �� ��� ������ ����� � �������� �� ���� ������� ��� �����\n�� �������\n������ �� �� ������ ������� �������(1 - �� , 2- ���)" << std::endl;
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
		Sleep(3000);
		system("cls");
		std::cout << "\n������ ������� �� ������������� ������� ���� �� ������ ����\n1- ����    2 - ������    3 - ����" << std::endl;
		int choice8 = 0;
		std::cin >> choice8;

		if (choice8 == 1)
		{
			system("cls");
			std::cout << "�� ������� ������� ������� �� ��� ���������� �� ���\n�� �������\n������ �� �� ������ ������� �������(1 - �� , 2- ���)" << std::endl;
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
			std::cout << "������� ����� � �������\n���� �������� ������� ���������� �� 1" << std::endl;

		}
		else if (choice8 == 3)
		{
			system("cls");
			std::cout << "������� ����� ,�� ������� � ��� � ������� ��� �� ���� �� ��������� � ������ ����� � ������ ������� \n�� �������\n������ �� �� ������ ������� �������(1 - �� , 2- ���)" << std::endl;
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