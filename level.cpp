#include "levels.h"
void level1()
{
	while (true)
	{
		system("cls");
		std::cout << "Вы пронснулись в пустом перевернутом автомобиле без памяти с сильной болью в голове\n\n1 - выбить окно    2 - попробовать открыть дверь    3 - позвать на помощь" << std::endl ;
		int choice = 0;
		std::cin >> choice;
		if (choice == 1)
		{
			std::cout << "Bы разбили окно и вышли на автостраду";
		}
		else if (choice == 2)
		{
			std::cout << "Дверь была закрыта\n1 - выбить окно    2 - позвать на помощь" << std::endl;
			int choice1 = 0;
			std::cin >> choice1;
			if (choice1 == 1)
			{
				std::cout << "Bы разбили окно и вышли на автостраду" << std::endl;
			}
			else if(choice1 == 2)
			{
				std::cout << "Вам никто не ответил , через окно вы увидели бледную женщину которая пошла в сторону машины\n.Вы резко разбили окно и выползли" << std::endl;
			}
		}
		else if (choice == 3)
		{
			system("cls");
			std::cout << "Вам никто не ответил , через окно вы увидели бледную женщину которая пошла в сторону машины\n.Вы резко разбили окно и выползли" << std::endl;
		}
		Sleep(5000);
		system("cls");
		std::cout << "ВОЗЛЕ МАШИНЫ ВЫ УВИДЕЛИ БЛЕДНУЮ ЖЕНЩИНУ КОТОРАЯ ПОШЛА НА ВАС\nЖЕНЩИНА ПРОИЗНОСИТ НЕ ЧЕЛОВЕЧЕСКИЕ ЗВУКИ\n1 - ВЗЯТЬ ОСКОЛОК    2 - УДАРИТЬ ЖЕНЩИНУ    3 - БЕЖАТЬ " << std::endl;
		int choice2 = 0;
		std::cin >> choice2;
		if (choice2 == 1)
		{
			std::cout << "Вы сбили с ног женщину и изрезали ее но она встала и накинулась на вас\n1 - УДАРИТЬ ЖЕНЩИНУ    2 - БЕЖАТЬ" << std::endl;
			int choice3 = 0;
			std::cin >> choice3;
			if (choice3 == 1)
			{
				system("cls");
				std::cout << "Вы ударили женщину , но результатов это не принесло и она снова на вас напала.\nВыхода не было и со страха вы убежали через машину разбив окно с другой стороны" << std::endl;
			}

		}
		else if (choice2 == 2)
		{
			std::cout << "Вы ударили женщину , но результатов это не принесло и она снова на вас напала\n1 - ВЗЯТЬ ОСКОЛОК    3 - БЕЖАТЬ " << std::endl;
			int choice4 = 0;
			std::cin >> choice4;
			if (choice4 == 1)
			{
				std::cout << "Вы сбили с ног женщину и изрезали ее но она встала и накинулась на вас, вас укусили\nВЫ ПОГИБЛИ\nХотите ли вы начать заново(1 - да , 2- нет)" << std::endl;
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
				std::cout << "Вы убежали разбив окно машины с другой стороны" << std::endl;
			}
		}
		else
		{
			std::cout << "Вы залезли в машину и вышли с другой стороны разбив окно" << std::endl;
		}
		Sleep(3000);
		system("cls");
		std::cout << "когда вы вылезли из машины вы увидели толпу людей с другой стороны оставалось решить в какую стороун вы пойдете\n 1 - драться    2 - убежать обратно" << std::endl;
		int choice5 = 0;
		if (choice5 == 1)
		{
			std::cout << "Вас сьели и вы умерли\nХотите начать уровень заново?(1 - да , 2- нет)" << std::endl;
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
	
			std::cout << "вы полезли обратно" << std::endl;
		}
		system("cls");
		std::cout << "В машине вы на задних сиденьях лежали топор и револьер .Что вы возьмете?\n1 - топор    2 - револьер" << std::endl;
		int choice6 = 0;
		std::cin >> choice6;
		if (choice6 == 1)
		{
			std::cout << "\nВы взяли топор" << std::endl;
		}
		else
		{
			system("cls");
			std::cout << "вы взяли револьер\nУвидев женщину вы наставили на нее оружие и прицелились в \n1- тело    2 - голову    3 - ногу" << std::endl;
			int choice7 = 0;
			std::cin >> choice7;
			if (choice7 == 1)
			{
				system("cls");
				std::cout << "вы выстрелили не замедлив женщину и она накинулась на вас \nВместе с этим пришла и толпа с другой стороны\nВЫ ПОГИБЛИ\nХотите ли вы начать уровень сначала" << std::endl;
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
				std::cout << "Женщина упала и погибла ,но на шум пришла толпа и несмотря на ваши усердия вас сьели\nВЫ ПОГИБЛИ\nХотите ли вы начать уровень сначала(1 - да , 2- нет)" << std::endl;
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
		std::cout << "\nУвидев женщину вы приготовились ударить куда вы будете бить\n1- тело    2 - голову    3 - ногу" << std::endl;
		int choice8 = 0;
		std::cin >> choice8;

		if (choice8 == 1)
		{
			system("cls");
			std::cout << "вы ударили женщину топором но она накинулась на вас\nВЫ ПОГИБЛИ\nХотите ли вы начать уровень сначала(1 - да , 2- нет)" << std::endl;
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
			std::cout << "Женщина упала и погибла" << std::endl;
		}
		else if (choice8 == 3)
		{
			std::cout << "Женщина упала ,но полезла к вам и укусила вас за ногу вы закричали и пришла толпа с другой стороны \nВЫ ПОГИБЛИ\nХотите ли вы начать уровень сначала(1 - да , 2- нет)" << std::endl;
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
		std::cout << "Все дороги назад были не безопасным и вы отправились в лес.\nКонец 1 главы." << std::endl;
		Sleep(5000);
	}
}