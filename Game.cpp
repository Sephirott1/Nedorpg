#include "Game.h"
#include <windows.h>

//void heroStat()
//{
//	Hero hero;
//	system("cls");
//	std::cout << "Перед началом игры необходимо задать базоые навыки для персонаж\n(1 очко = 1 навык)\nКол-во очков = 1\nПрокачать удачу - 1\nПрокачать владение топором - 2\nПрокачать владение револьером - 3\n";
//	int choiceStat = 0;
//	std::cin >> choiceStat;
//	system("cls");
//	if (choiceStat == 1)
//	{
//		hero.lucky++;
//		std::cout << "Удача прокачана!!!";
//		Sleep(4000);
//		system("cls");
//	}
//	else if (choiceStat == 2)
//	{
//		hero.axWie++;
//		std::cout << "Владение топором прокачано!!!";
//		Sleep(4000);
//		system("cls");
//	}
//	else if (choiceStat == 2)
//	{
//		hero.gunWie++;
//		std::cout << "Владние револьером прокачано!!!";
//		Sleep(4000);
//		system("cls");
//	}
//}
void Game::Menu()
{
	
	while (true)
	{
		std::cout << "Жизнь после\n\n(1)Начать новую игру\n(2)Выбрать главу\n(3)Выйти из игры\n";
		int NumStart = 0;
		std::cin >> NumStart;
		if (NumStart == 1)
		{
			level1();
		}
		else if (NumStart == 2)
		{
			std::cout << "Необходимо задать базоые навыки для персонажа (1 очко = 1 навык)\nКол-во очков = 1\nПрокачать удачу - 1\nПрокачать владение топором - 2\nПрокачать владение револьером - 3\n";
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
				while (load < 1 or load > 3)
				{
					std::cout << "Ошибка, этого уровня нету!";
					Sleep(5000);
					continue;
				}
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

void Game::level1()
{
		while (true)
		{
			system("cls");
			std::cout << "Вы пронснулись в пустом перевернутом автомобиле без памяти с сильной болью в голове.\n\n1 - выбить окно \n2 - попробовать открыть дверь \n3 - позвать на помощь" << std::endl;
			int choice = 0;
			std::cin >> choice;
			if (choice == 1)
			{
				system("cls");
				std::cout << "Bы разбили окно и вышли на автостраду";
			}
			else if (choice == 2)
			{
				system("cls");
				std::cout << "Дверь была закрыта.\n1 - выбить окно    \n2 - позвать на помощь" << std::endl;
				int choice1 = 0;
				std::cin >> choice1;
				if (choice1 == 1)
				{
					system("cls");
					std::cout << "Bы разбили окно и вышли на автостраду" << std::endl;
				}
				else if (choice1 == 2)
				{
					system("cls");
					std::cout << "Вам никто не ответил, через окно вы увидели бледную женщину которая пошла в сторону машины\n.Вы резко разбили окно и выползли." << std::endl;
				}
			}
			else if (choice == 3)
			{
				system("cls");
				std::cout << "Вам никто не ответил, через окно вы увидели бледную женщину которая пошла в сторону машины\n.Вы резко разбили окно и выползли." << std::endl;
			}
			Sleep(5000);
			system("cls");
			std::cout << "ВОЗЛЕ МАШИНЫ ВЫ УВИДЕЛИ БЛЕДНУЮ ЖЕНЩИНУ КОТОРАЯ ПОШЛА НА ВАС\nЖЕНЩИНА ПРОИЗНОСИТ НЕ ЧЕЛОВЕЧЕСКИЕ ЗВУКИ\n1 - ВЗЯТЬ ОСКОЛОК    \n2 - УДАРИТЬ ЖЕНЩИНУ    \n3 - БЕЖАТЬ " << std::endl;
			int choice2 = 0;
			std::cin >> choice2;
			if (choice2 == 1)
			{
				system("cls");
				std::cout << "Вы сбили с ног женщину и изрезали её, но она встала и накинулась на вас.\n1 - УДАРИТЬ ЖЕНЩИНУ    \n2 - БЕЖАТЬ" << std::endl;
				int choice3 = 0;
				std::cin >> choice3;
				if (choice3 == 1)
				{
					system("cls");
					std::cout << "Вы ударили женщину, но результатов это не принесло и она снова на вас напала.\nВыхода не было и со страха вы убежали через машину разбив окно с другой стороны." << std::endl;
				}

			}
			else if (choice2 == 2)
			{
				system("cls");
				std::cout << "Вы ударили женщину, но результатов это не принесло и она снова на вас напала\n1 - ВЗЯТЬ ОСКОЛОК    \n3 - БЕЖАТЬ " << std::endl;
				int choice4 = 0;
				std::cin >> choice4;
				if (choice4 == 1)
				{
					system("cls");
					std::cout << "Вы сбили с ног женщину и изрезали её, но она встала и накинулась на вас, вас укусили!\nВЫ ПОГИБЛИ\nХотите ли вы начать заново?\n1 - да  \n2- нет" << std::endl;
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
					std::cout << "Вы убежали разбив окно машины с другой стороны." << std::endl;
				}
			}
			else
			{
				system("cls");
				std::cout << "Вы залезли в машину и вышли с другой стороны разбив окно." << std::endl;
			}
			Sleep(3000);
			system("cls");
			std::cout << "когда вы вылезли из машины вы увидели толпу людей с другой стороны, оставалось решить в какую сторону вы пойдете.\n1 - драться    \n2 - убежать обратно" << std::endl;
			int choice5 = 0;
			std::cin >> choice5;
			if (choice5 == 1)
			{
				system("cls");
				std::cout << "Вас сьели и вы умерли\nХотите начать уровень заново?\n1 - да  \n2- нет" << std::endl;
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
				std::cout << "вы полезли обратно." << std::endl;
			}
			system("cls");
			std::cout << "В машине на задних сиденьях лежали топор и револьер. Что вы возьмете?\n1 - топор    \n2 - револьер" << std::endl;
			int choice6 = 0;
			std::cin >> choice6;
			if (choice6 == 1)
			{
				system("cls");
				std::cout << "Вы взяли топор." << std::endl;
			}
			else
			{
				system("cls");
				std::cout << "вы взяли револьер\nУвидев женщину вы наставили на нее оружие и прицелились в \n1- тело    \n2 - голову    \n3 - ногу" << std::endl;
				int choice7 = 0;
				std::cin >> choice7;
				if (choice7 == 2)
				{
					int luckypatron = rand() % 6;
					if (luckypatron != 1)
					{
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "Благодаря вашей удаче вам попалась ячейка с патроном и вы выстрелии в женщину";
						Sleep(5000);
						system("cls");
						std::cout << "Вы обрадовались что выжили\nНо на звук револьера пришла толпа бледных людей с другой сторoны";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "Вам попалась ячейка револьера заряженная патроном";
						Sleep(5000);
						system("cls");
						std::cout << "Вы обрадовались что выжили\nНо на звук револьера пришла толпа бледных людей с другой сторoны";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "Благодаря вашей удаче вам попалась ячейка с патроном и вы выстрелии в женщину";
						Sleep(5000);
						system("cls");
						std::cout << "Но она выжила и сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "Вам попалась ячейка револьера заряженная патроном";
						Sleep(5000);
						system("cls");
						std::cout << "Но она выжила и сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "В ячейке барабана не было патрона и женщина сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "Благодаря вашей удаче вам попалась ячейка с патроном и вы выстрелии в женщину";
						Sleep(5000);
						system("cls");
						std::cout << "Но она выжила и сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
						std::cout << "Вам попалась ячейка револьера заряженная патроном";
						Sleep(5000);
						system("cls");
						std::cout << "Но она выжила и сьела вас";
						Sleep(5000);
						system("cls");
						std::cout << "\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала? \n1 - да \n2 - нет" << std::endl;
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
			std::cout << "\nУвидев женщину вы приготовились ударить куда вы будете бить\n1- тело    \n2 - голову    \n3 - ногу" << std::endl;
			int choice8 = 0;
			std::cin >> choice8;

			if (choice8 == 1)
			{
				system("cls");
				std::cout << "вы ударили женщину топором но она накинулась на вас\nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала?\n1 - да \n2- нет" << std::endl;
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
				std::cout << "Женщина упала и погибла.\nваше владение топором повысилось до 1" << std::endl;

			}
			else if (choice8 == 3)
			{
				system("cls");
				std::cout << "Женщина упала, но полезла к вам и укусила вас за ногу, вы закричали и пришла толпа с другой стороны! \nВЫ ПОГИБЛИ!\nХотите ли вы начать уровень сначала?\n1 - да \n2- нет" << std::endl;
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
			system("cls");
			std::cout << "хотите ли вы продолжить игру и перейти во 2 главу?\n(1) - да\n(2) - нет\n";
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
		std::cout << "Начало второй главы!" << std::endl;
		std::cout << "Ты долго шел по лесу, от голода и усталости упал в обморок!\nТы проснулся в амбаре с мешком на голове.\nТебе его сняли и ты увидел 2-ух мужчин.\nУ одного из них был твой топор в руках.\n";
		std::cout << "Что вы спросите у мужчины\n1 - кто ты ?    \n2 - что я сдесь делаю    \n3 - промолчать\n";
		int choice = 0;
		std::cin >> choice;
		if (choice == 1)
		{
			system("cls");
			std::cout << "Отец Саймона: Как ты мог меня забыть Саймон? Я твой отец!\n";
			std::cout << "1 - я не помню ничего.    \n2 - отпусти меня. живо!\n";
			std::cin >> choice;
			if (choice == 1)
			{
				system("cls");
				std::cout << "Отец Саймона: так я и знал. Если ты не Саймон то прошу тебя забрать свои припасы и уйти по хорошему.\n";
				std::cout << "1 - отдай мне все что у тебя есть, а не то.....    \n2 - уйти\n";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "Неизвестный: С таким тоном тебе долго и так не прожить, так что Дерил разберись с ним!\n\nВы разозлили Отца Саймона.\nВЫ ПОГИБЛИ!\nХотите ли вы начать главу 2 сначала?\n1 - да \n2 - нет)\n";
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
					std::cout << "Хорошо. Я уйду.";
				}
			}
			else if (choice == 2)
			{
				system("cls");
				std::cout << "Неизвестный: С таким тоном тебе долго не прожить, так что Дерил разберись с ним!\n\nВы разозлили Отца Саймона.\nВЫ ПОГИБЛИ!\nХотите ли вы начать главу 2 сначала?\n1 - да \n2 - нет\n";
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
			std::cout << "Неизвестный: Мы нашли тебя без сознания Саймон, но решили перестраховаться и точно проверить ты ли это.\n";
			std::cout << "1 - Я сам не знаю кто я. ЖИВО ОТПУСТИ МЕНЯ!   \n2 - я ничего о себе не помню.\n";
			std::cin >> choice;
			if (choice == 1)
			{
				system("cls");
				std::cout << "Неизвестный: С таким тоном тебе долго не прожить, так что Дерил разберись с ним!\n\nВы разозлили Отца Саймона.\nВЫ ПОГИБЛИ!\nХотите ли вы начать главу 2 сначала?\n1 - да \n2 - нет\n";
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
				std::cout << "Неизвестный : Я так и знал что ошибся , ты не мой сын..... В таком случае просто уходи. Припасы и твой топор тебе выдаст Дерил.";
				Sleep(8000);
			}
		}
		else if (choice == 3)
		{
			system("cls");
			std::cout << "Неизвестный: Саймон это ты?\n";
			std::cout << "1 - кто такой Саймон?    \n2 - отпусти меня. ЖИВО!    \n3 - я ничего не помню о себе.\n";
			std::cin >> choice;
			if (choice == 1)
			{
				system("cls");
				std::cout << "Неизвестный: Так я и знал, он лишь похож на него. Прости мы тут чужих не любим, так что уходи пока мы не передумали.";
				std::cout << "1 - молча уйти \n2 - попросить припасов в дорогу\n3 - попросить топор и припасы";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "Вы ушли но долго не продержались без припасов.\nВЫ ПОГИБЛИ!\nХотите ли вы начать главу 2 сначала?\n1 - да \n2 - нет\n";
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
					std::cout << "Неизвестный: Дэрил даст тебе припасы и вот забирай свой топор у нас и так достаточно оборонительных инструментов, а тебе это понадобится.";
				}
				else if (choice == 3)
				{
					system("cls");
					std::cout << "Неизвестный: Я не знаю ты ли мой сын, но его звали Саймон.";
					std::cout << "\n1 - я не помню ничего.    \n2 - отпустите меня\n";
					std::cin >> choice;
					if (choice == 1)
					{
						std::cout << "Отец Саймона: в таком случае наверно я перепутал тебя со своим сыном, дерил отдаст тебе твои вещи и просто уходи.";
					}
					else
					{
						std::cout << "Отец Саймона: в таком случае наверно я перепутал тебя со своим сыном, дерил отдаст тебе твои вещи и просто уходи.";
					}
				}
			}
			else if (choice == 2)
			{
				system("cls");
				std::cout << "Неизвестный: ты явно не мой сын, нам тут проблемы не нужны так что лучше проваливай!";
				std::cout << "\n1 - мои припасы, где они?!    \n2 - молча уйти\n";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "Неизвестный: С таким тоном тебе долго не прожить, так что Дерил разберись с ним!\n\nВы разозлили незнакомца.\nВЫ ПОГИБЛИ!\nХотите ли вы начать главу 2 сначала?\n1 - да \n2 - нет\n";
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
					std::cout << "Вы ушли, но долго не продержались без припасов.\nВЫ ПОГИБЛИ!\nХотите ли вы начать главу 2 сначала? \n1 - да \n2 - нет\n";
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
		std::cout << "Вы вышли из амбара и второй мужчина по имени Дерил отдал вам рюкзак с припасами и ваш топор.\n1 - С кем меня перепутал тот мужик?\n2 - Промолчать\n";
		std::cin >> choice;
		system("cls");
		if (choice == 1)
		{
			std::cout << "Дерил : Он спутал тебя с моим братом и с его сыном Саймоном\nИ ни слова больше я чужаков не люблю , а общаться с ними тем более.";
			Sleep(8000);
			system("cls");
		}
		else if (choice == 2)
		{
			std::cout << "Дерил : Тебе правда не интересно с кем тебя перепутал Отец?\n1 - да мне все равно\n2 - нет интересно,я боялся у вас спросить это\n";
			std::cin >> choice;
			if (choice == 1)
			{
				std::cout << "Дерил : Так я и понял сразу оставлять тебя в живых не лучшая затея";
				Sleep(8000);
				system("cls");
				std::cout << "Вы вызвали подозрения у Дерила и он вас убил\nВЫ ПОГИБЛИ!\nХотите ли вы начать главу 2 сначала? \n1 - да \n2 - нет\n";
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
				std::cout << "Дерил : С моим братом и его сыном Самоном , он уехал искать...... А не важно , от туда он не вернулся...\n";
				Sleep(8000);
				system("cls");
			}
		}
		std::cout << "Вы собрались уходить как услышали...";
		Sleep(4000);
		system("cls");
		std::cout << "Отец Саймона: Эй ты, постой!\n";
		std::cout << "1 - остановится    \n2 - прожолжить идти\n";
		std::cin >> choice;
		if (choice == 1)
		{
			system("cls");
			std::cout << "Знаешь тебе ведь все равно нужно будет имя, возьми имя моего сына в качестве благодарности за твое спасение.\n";
			Sleep(5000);
			std::cout << "Саймон: Знаете а мне нравится, считайте что я продолжу историю вашего сына.";
			Sleep(5000);
		}
		else if (choice == 2)
		{
			system("cls");
			std::cout << "Отец Саймона: Я ЖЕ СКАЗАЛ ПОСТОЙ! ТЫ ЧТО ГЛУХОЙ СОВСЕМ???\n";
			std::cout << "\n1 - да    \n2 - извините";
			std::cin >> choice;
			system("cls");
			std::cout << "\nОтец Саймона: Ладно я просто пришел к тебе кое что сказать. Знаешь тебе ведь все равно нужно будет имя, возьми имя моего сына в качестве благодарности за твое спасение.";
			Sleep(5000);
			std::cout << "\nСаймон: Знаете а мне нравится, считайте что я продолжу историю вашего сына.";
			Sleep(5000);
		}
		system("cls");
		std::cout << "Отец Саймона: Если так то у меня есть просьба к тебе Саймон. Знаешь мой сын пропал когда ушел искать выживших в город Луисвиль.\nЯ даже не знаю жив ли он вообще.\nВ любом случае я тебе посоветую направляться туда. \nНасколько мне известно там была последняя база человечества от этого вируса.\nИ еще учитывай что их ты убиваешь только попаданиями в голову весь остальной урон для них не важен.\nПомни Саймон они не люди и их не надо жалеть иначе сам станешь как они.\nЗнай парень что зомби ты становишся не только если тебя укусят, а еще и потому что ты просто можешь умереть и если тебе не нанесут урон по мозгу то\nты превратишься в ходячего.";
		Sleep(45000);
		std::cout << "\nСаймон: Я вас понял. Я отправлюсь туда и найду вашего сына если он конечно не.....\n";
		Sleep(6000);
		system("cls");
		std::cout << "Отец Саймона: Стоп..... Не проодолжай... Сделай все что сможешь чтобы найти его.\n";
		Sleep(6000);
		std::cout << "Саймон: Хорошо. Я пойду.\n";
		Sleep(3000);
		system("cls");
		std::cout << "В портфеле вы нашли карту на которой был путь в Луисвиль. И вы отправились в путь.\n";
		Sleep(5000);
		system("cls");
		std::cout << "Но спустя неделю дороги у вас закончились припасы и чтобы отправиться дальше, вы остановились на заправке на которой вы нашли машину,\n что гораздо увеличит скорость переджвижения.\nНа ее территории было сама заправка, кафе и склад.\nЧто вы пойдете обыскивать?\n(1) - Заправку\n(2) - Кофе\n(3) - склад\n";
		int locgo = 0;
		std::cin >> locgo;
		if (locgo == 1)
		{
			int eat = rand() % 100;
			if (eat < 50)
			{
				system("cls");
				std::cout << "Вы не нашли еды. Вам стоит пройтись в другую локацию\n(1) - Кафе\n(2) - склад\n";
				std::cin >> locgo;
				if (locgo == 1)
				{
					int eat2 = rand() % 100;
					if (eat2 < 50)
					{
						system("cls");
						std::cout << "Вы не нашли еды. Вам стоит пройтись в другую локацию\n(1) - склад\n";
						std::cin >> locgo;
						if (locgo == 1)
						{
							int eat3 = rand() % 100;
							if (eat2 < 50)
							{
								system("cls");
								std::cout << "К сожалению вы не нашли еду не в одной локации.Но в машине вы увидели 2 упаковки чипсов и литр КОКА-КОЛЫ.\nЭтого вам хватит чтобы доехать до Луисвился.";
								Sleep(4000);
							}
							else if (eat2 > 50)
							{
								system("cls");
								std::cout << "Вы нашли еду и этого вам хватит чтобы доехать до Луисвиля.";
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
						std::cout << "Вы не нашли еды. Вам стоит пройтись в другуй локацию\n(1) - кафе\n";
						std::cin >> locgo;
						if (locgo == 1)
						{
							int eat3 = rand() % 100;
							if (eat2 < 50)
							{
								system("cls");
								std::cout << "Вы не нашли еду не в одной локации к сожалению. Но в машине вы увидели 2 упаковки чипсов и литр КОКА-КОЛЫ.\nЭтого вам хватит чтобы доехать до Луисвиля.";
								Sleep(6000);
							}
							else if (eat > 50)
							{
								system("cls");
								std::cout << "Вы нашли еду и готовы отправиться в Луисвиль.";
								Sleep(2000);
							}
						}

					}
					else if (eat > 50)
					{
						system("cls");
						std::cout << "Вы нашли еду и готовы отправиться в Луисвиль.";
						Sleep(2000);
					}
				}
			}
			else if (eat > 50)
			{
				system("cls");
				std::cout << "Вы нашли еду и готовы отправиться в Луисвиль.";
				Sleep(2000);
			}
		}
		else if (locgo == 2)
		{
			int eat = rand() % 100;
			if (eat < 50)
			{
				system("cls");
				std::cout << "Вы не нашли еды. Вам стоит пройтись в другуй локацию\n(1) - Заправка\n(2) - склад\n";
				std::cin >> locgo;
				if (locgo == 1)
				{
					int eat2 = rand() % 100;
					if (eat2 < 50)
					{
						system("cls");
						std::cout << "Вы не нашли еды. Вам стоит пройтись в другуй локацию\n(1) - склад\n";
						std::cin >> locgo;
						if (locgo == 1)
						{
							int eat3 = rand() % 100;
							if (eat2 < 50)
							{
								system("cls");
								std::cout << "К сожалению. вы не нашли еду не в одной локации. Но в машине вы увидели 2-е упаковки чипсов и литр КОКА-КОЛЫ.\nЭтого вам хватит чтобы доехать до Луисвиля.";
								Sleep(5000);
							}
							else if (eat > 50)
							{
								system("cls");
								std::cout << "Вы нашли еду и готовы отправиться в Луисвиль.";
								Sleep(2000);
							}
						}

					}
					else if (eat > 50)
					{
						system("cls");
						std::cout << "Вы нашли еду и готовы отправиться в Луисвиль.";
						Sleep(2000);
					}
				}
				else if (locgo == 2)
				{
					int eat2 = rand() % 100;
					if (eat2 < 50)
					{
						system("cls");
						std::cout << "Вы не нашли еды. Вам стоит пройтись в другуй локацию\n(1) - склад\n";
						std::cin >> locgo;
						if (locgo == 1)
						{
							int eat3 = rand() % 100;
							if (eat2 < 50)
							{
								system("cls");
								std::cout << "Вы не нашли еду не в одной локации к сожалению. Но в машине вы увидели 2-е упаковки чипсов и литр КОКА-КОЛЫ.\nЭтого вам хватит чтобы доехать до Луисвиля.";
								Sleep(5000);
							}
							else if (eat > 50)
							{
								system("cls");
								std::cout << "Вы нашли еду и готовы отправиться в Луисвиль.";
								Sleep(2000);
							}
						}

					}
					else if (eat > 50)
					{
						system("cls");
						std::cout << "Вы нашли еду и готовы отправиться в Луисвиль.";
						Sleep(2000);
					}
				}
			}
			else if (eat > 50)
			{
				system("cls");
				std::cout << "Вы нашли еду и готовы отправиться в Луисвиль.";
				Sleep(2000);
			}
		}
		else if (locgo == 3)
		{
			int eat = rand() % 100;
			if (eat < 50)
			{
				system("cls");
				std::cout << "Вы не нашли еды. Вам стоит пройтись в другуй локацию\n(1) - Заправка\n(2) - Кафе\n";
				std::cin >> locgo;
				if (locgo == 1)
				{
					int eat2 = rand() % 100;
					if (eat2 < 50)
					{
						system("cls");
						std::cout << "Вы не нашли еды. Вам стоит пройтись в другуй локацию\n(1) - Кафе\n";
						std::cin >> locgo;
						if (locgo == 1)
						{
							int eat3 = rand() % 100;
							if (eat2 < 50)
							{
								system("cls");
								std::cout << "К сожалению вы не нашли еду не в одной локации. Но в машине вы увидели 2-е упаковки чипсов и литр КОКА-КОЛЫ.\nЭтого вам хватит чтобы доехать до Луисвиля.";
								Sleep(6000);
							}
							else if (eat > 50)
							{
								system("cls");
								std::cout << "Вы нашли еду и готовы отправиться в Луисвиль.";
								Sleep(2000);
							}
						}

					}
					else if (eat > 50)
					{
						system("cls");
						std::cout << "Вы нашли еду и готовы отправиться в Луисвиль.";
						Sleep(2000);
					}
				}
				else if (locgo == 2)
				{
					int eat2 = rand() % 100;
					if (eat2 < 50)
					{
						system("cls");
						std::cout << "Вы не нашли еды. Вам стоит пройтись в другуй локацию\n(1) - Заправка\n";
						std::cin >> locgo;
						if (locgo == 1)
						{
							int eat3 = rand() % 100;
							if (eat2 < 50)
							{
								system("cls");
								std::cout << "К сожалению вы не нашли еду не в одной локации. Но в машине вы увидели 2-е упаковки чипсов и литр КОКА-КОЛЫ.\nЭтого вам хватит чтобы доехать до Луисвился.";
								Sleep(5000);
							}
							else if (eat > 50)
							{
								system("cls");
								std::cout << "Вы нашли еду и готовы отправиться в Луисвиль.";
								Sleep(2000);
							}
						}

					}
					else if (eat > 50)
					{
						system("cls");
						std::cout << "Вы нашли еду и готовы отправиться в Луисвиль.";
						Sleep(2000);
					}
				}
			}
			else if (eat > 50)
			{
				system("cls");
				std::cout << "Вы нашли еду и готовы отправиться в Луисвиль.";
				Sleep(2000);
			}
		}
		system("cls");
		std::cout << "Вы отправились с припасами в Луисвиль\nПродолжение в 3 ФИНАЛЬНОЙ ГЛАВЕ." << std::endl;
		Sleep(3000);
		system("cls");
		std::cout << "Хотите ли вы продолжить игру и перейти во 3 главу?\n(1) - да\n(2) - нет\n";
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
		std::cout << "Дорога была тихой и Саймон подьехал к Луисвилю.\nДальше нужно было решать как саймон пойдет на Контрольно пропускной пункт Луисвиля\n1 - поехать на машине    \n2 - пойти пешком    \n3 - полезть через крышу\n";
		int choice = 0;
		std::cin >> choice;
		if (choice == 1)
		{
			system("cls");
			std::cout << "Вы привлекли внимание огромного количества зомби и они окупировали вашу машину\nВЫ УМЕРЛИ!\nХотите начать 3 главу заново?\n1 - да  \n2 - нет)\n";
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
			std::cout << "ВЫ ВЫБРАЛИ ПОЙТИ ПЕШКОМ";
			Sleep(5000);
			system("cls");
			std::cout << "Войдя в КПП вы увидели 2 зомби в военной форме\n1 - идти в атаку    \n2 - убежать и бросить дело....\n";
			std::cin >> choice;
			if (choice == 1)
			{
				system("cls");
				std::cout << "На вас напали зомби что вы сделаете? \n1 - удар сразу 2 зомби топором \n2 - оттолкнуть и побежать вперед\n";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "Вы убили 2 зомби одним ударом и смогли пробежать мимо входа, но увидели огромное количество зомби\n1 - пойти в атаку    \n2 - спрятаться в здании слева\n";
					std::cin >> choice;
					if (choice == 1)
					{
						system("cls");
						std::cout << "Вы смогли победить большое кол-во ходячих благодаря своему уровню владения топором.\nНо в итоге вы были сильно ранены и погибли!\nВЫ ПОГИБЛИ!\nХотите начать 3 главу заново?1 - да \n2 - нет\n";
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
						std::cout << "Вы успешно зашли в здание, но вас заметил один из Зомби пойдя в сторону здания\nOн привлек за собой толпу.";
					}
					Sleep(10000);
					system("cls");
					std::cout << "Толпа выбила окна и вам пришлось пойти на второй этаж";
					Sleep(2000);
					system("cls");
					std::cout << "НА ВАС НАПАЛ ЗОМБИ!!!\n1 - ОТТОЛКНУТЬ    \n2 - УДАРИТЬ    \n3 - ПОЗВАТЬ НА ПОМОЩЬ\n";
					std::cin >> choice;
					if (choice == 1)
					{
						system("cls");
						std::cout << "ВЫ ОТТОЛКНУЛИ ЗОМБИ, НО В ПОСЛЕДНИЙ МОМЕНТ ОН УКУСИЛ ВАС!\nЧто вы сделаете?\n1 - сдаться зомби    \n2 - продолжить поиски выжывших\n";
						std::cin >> choice;
						if (choice == 1)
						{
							system("cls");
							std::cout << "Вы погибли и прошли игру на Нейтральную концовку - вы зашли в здание, но решили сдаться из-за того ,что вашего героя укусили";
							Sleep(10000);
							break;
						}
						else if (choice == 1)
						{
							system("cls");
							std::cout << "ВЫ ВЫШЛИ ПО ПОЖАРНОЙ ЛЕСТНИЦЕ НАВЕРХ И ЗОМБИ ВАС ТАМ НЕ ДОСТАЛИ.";
						}

					}
					else if (choice == 2)
					{
						system("cls");
						std::cout << "Вы ударили зомби топором, но в последний момент \nОН УКУСИЛ ВАС!\nЧто вы сделаете?\n1 - сдаться зомби    \n2 - продолжить поиски выжывших\n";
						std::cin >> choice;
						if (choice == 1)
						{
							system("cls");
							std::cout << "Вы погибли и прошли игру на Нейтральную концовку - вы зашли в здание, но решили сдаться из за того что вашего героя укусили";
							Sleep(10000);
							break;
						}
						else if (choice == 1)
						{
							system("cls");
							std::cout << "ВЫ ВЫШЛИ ПО ПОЖАРНОЙ ЛЕСТНИЦЕ НАВЕРХ И ЗОМБИ ВАС ТАМ НЕ ДОСТАЛИ.";
						}
					}
					else if (choice == 3)
					{
						system("cls");
						std::cout << "Вам никто не ответил и зомби сьели вас.\nВЫ ПОГИБЛИ!\nХотите начать 3 главу заново?\n1 - да \n2 - нет)\n";
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
					std::cout << "Вы смогли пробежать мимо входа, но увидели огромное количество зомби.\n1 - пойти в атаку    \n2 - спрятаться в здании слева\n";
					std::cin >> choice;
					if (choice == 1)
					{
						system("cls");
						std::cout << "Вы смогли победить большое кол-во ходячих благодаря своему уровню владения топором\nНо в итоге вы были сильно ранены и погибли.\nВЫ ПОГИБЛИ!\nХотите начать 3 главу заново?\n1 - да \n2 - нет\n";
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
						std::cout << "Вы успешно зашли в здание, но вас заметил один из Зомби пойдя в сторону здания\nон привлек за собой толпу.";
					}
					system("cls");
					std::cout << "Толпа выбила окна и вам пришлось пойти на второй этаж\n";
					Sleep(8000);
					system("cls");
					std::cout << "НА ВАС НАПАЛ ЗОМБИ!!!\n1 - ОТТОЛКНУТЬ    \n2 - УДАРИТЬ    \n3 - ПОЗВАТЬ НА ПОМОЩЬ\n";
					std::cin >> choice;
					if (choice == 1)
					{
						system("cls");
						std::cout << "ВЫ ОТТОЛКНУЛИ ЗОМБИ, НО В ПОСЛЕДНИЙ МОМЕНТ ОН УКУСИЛ ВАС!\nЧто вы сделаете?\n1 - сдаться зомби    \n2 - продолжить поиски выжывших\n";
						std::cin >> choice;
						if (choice == 1)
						{
							system("cls");
							std::cout << "Вы погибли и прошли игру на Нейтральную концовку - вы зашли в здание, но решили сдаться из за того что вашего героя укусили.";
							Sleep(10000);
							continue;
						}
						else if (choice == 1)
						{
							system("cls");
							std::cout << "ВЫ ВЫШЛИ ПО ПОЖАРНОЙ ЛЕСТНИЦЕ НАВЕРХ И ЗОМБИ ВАС ТАМ НЕ ДОСТАЛИ.";
						}

					}
					else if (choice == 2)
					{
						system("cls");
						std::cout << "Вы ударили зомби топором, но в последний момент ОН УКУСИЛ ВАС.\nЧто вы сделаете?\n1 - сдаться зомби    \n2 - продолжить поиски выжывших\n";
						std::cin >> choice;
						if (choice == 1)
						{
							system("cls");
							std::cout << "Вы погибли и прошли игру на Нейтральную концовку - вы зашли в здание, но решили сдаться из за того что вашего героя укусили";
							Sleep(10000);
							break;
						}
						else if (choice == 1)
						{
							system("cls");
							std::cout << "ВЫ ВЫШЛИ ПО ПОЖАРНОЙ ЛЕСТНИЦЕ НАВЕРХ И ЗОМБИ ВАС ТАМ НЕ ДОСТАЛИ.";
						}
					}
					else if (choice == 3)
					{
						system("cls");
						std::cout << "Вам никто не ответил и зомби сьели вас.\nВЫ ПОГИБЛИ!\nХотите начать 3 главу заново?\n1 - да \n2 - нет\n";
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
				std::cout << "У вас были бинты из - за чего вы смогли перевязать рану\nСаймон понял что ему конец, но решился попытатся найти выжывших и сообщить НАСТОЯЩЕМУ САЙМОНУ, что его отец жив. ";
				Sleep(10000);
				system("cls");
				std::cout << "Саймон думал что делать.\nOбернувшись увидел что между зданиями находятся мостики, а в дали виднеется дым\nНаверняка от костра";
				Sleep(10000);
				system("cls");
				std::cout << "Отправившись вперед вы встретили группу выживших.";
				Sleep(8000);
				system("cls");
				std::cout << "Неизвестная девушка: Ссс....САЙМОН!!!!!?????\n";
				std::cout << "1 - извините я не Cаймон, я ищу как раз таки его    \n2 - Кто ты?\n";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "Джейн: Саймон как ты можешь искать самого себя? Это я Джейн! \nКак ты мог забыть?\n Мы же работали с тобой в одной бухгалтерии.";
				}
				else if (choice == 2)
				{
					system("cls");
					std::cout << "Джейн: Саймон это я Джейн! Как ты мог забыть?\n Мы же работали с тобой в одной бухгалтерии." << std::endl;
				}
				Sleep(10000);
				system("cls");
				Sleep(5000);
				std::cout << "Саймон: Джейн кто бы ты не была, я не помню о себе ничего с того момента как попал в аварию.\nМне нужен человек по имени Саймон, отец которого фермер и у него еще помощник Дэрил вродею.\n" << std::endl;
				Sleep(8000);
				system("cls");
				std::cout << "Джейн: Слава богу ты жив.\nТебе наверняка просто отшибло память.\nТвой отец и есть фермер, а Дэрил это твой брат!" << std::endl;
				Sleep(10000);
				system("cls");
				std::cout << "Саймон: ЧЧ....ЧТО?\n НО КАК ТОГДА МОЙ ОТЕЦ НЕ ПОНЯЛ ЧТО ЭТО Я?! " << std::endl;
				Sleep(5000);
				system("cls");
				std::cout << "Джейн: Саймон мне жаль, я не знаю как это произошло. Стоп, а что с твоей рукой?\n";
				std::cout << "1 - Меня укусили. Мне осталось не долго....    \n2 - Да так ничего, поцарапался";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "Джейн: О нет Саймон мне жаль, АААА";
					Sleep(4000);
					system("cls");
					std::cout << "Незнакомец в форме военного: ДЖЕЙН! БЫСТРО ОТОЙДИ, ОН ИНФИЦИРОВАН МНЕ ПРИДЕТСЯ ЕГО УБИТЬ!!!!\n";
					std::cout << "1 - О НЕТ! НЕ НАДО, КТО ЗНАЕТ МОЖЕТ Я И НЕ ПРЕВРАЩУСЬ!    \n2 - принять свою участь.....";
					std::cin >> choice;
					system("cls");
					std::cout << "Незнакомец в форме военного: Прости парень, но я не могу и не буду поддвергать своих людей опасности\n";
					Sleep(5000);
					system("cls");
					std::cout << "*ВЫСТРЕЛ*\n";
					Sleep(5000);
					system("cls");
					std::cout << "Вы прошли игру на Среднюю концовку - вы узнали тайну своей личности, но не смогли попрощаться с родными....";
					Sleep(10000);
					break;
				}
				else if (choice == 2)
				{
					std::cout << "Джейн: А, тогда хорошо. Я подумала что это укус.\nЧто ты собираешься делать дальше Саймон?";
					std::cout << "\n1 - хочу остаться тут.    \n2 - я должен увидеть своего отца и брата снова.";
					std::cin >> choice;
					if (choice == 1)
					{
						system("cls");
						std::cout << "Вы прожили еще 4 дня.\nВаше состояние резко ухудшалось и все поняли что вас укусили.";
						Sleep(8000);
						system("cls");
						std::cout << "Вы прошли игру на Плохую Концовку - вы соврали насчет болезни и остались в лагере выживших тем самым подвергнув их опасности.";
						Sleep(10000);
						break;
					}
					else if (choice == 2)
					{
						system("cls");
						std::cout << "Выжившие дали вам немного припасов.\nВы пробежали сквозь зомби и сели в свою машину.\nПриехав на ферму ваше состояние было очень плохим. \nВыйдя из машины вы рассказали всё вашему отцу и брату. \nРассказали где находится база выживших и с трудом заставили их уехать без вас.\nКогда родные уехали вы сели провожать закат, а вскоре превратились.\nКонец Игры";
						Sleep(100000);
						std::cout << "Вы прошли игру на Хорошую концовку - вы разгадали свою тайну личности, не подвергли опасности выжывших и помогли своей семье обрести безопасное жилье";
						Sleep(10000);
						break;
					}
				}

			}
			else if (choice == 2)
			{
				system("cls");
				std::cout << "Вы прошли игру на Нейтральную концовку - вы решили бросить дело которое вам доверил Отец Саймона.";
				Sleep(10000);
				break;
			}
		}
		else if (choice == 3)
		{
			system("cls");
			std::cout << "Вы отправились по лестницу на вверх\n";
			Sleep(5000);
			system("cls");
			std::cout << "ВЫ НАТКНУЛИСЬ НА ЗОМБИ И ОН НАПАЛ НА ВАС\n 1 - ударить топором    \n2 - бежать";
			std::cin >> choice;
			if (choice == 1)
			{
				system("cls");
				std::cout << "Топор выскользнул у вас из рук и вылетел в зомби который вместе с ним упал с крыши. Вы остались безоружным.";
				Sleep(8000);
				system("cls");
				std::cout << "Лестница обвалилась \nЧто вы будете делать?\n1 - просто сидеть    \n2 - спрыгните с крышы    \n3 - позовете на помощь";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "Вскоре вы погибли от нехватки припасов";
					Sleep(5000);
					system("cls");
					std::cout << "Вы прошли на Нейтральную концовку - ничего не добившись вы погибли.";
					Sleep(10000);
					break;
				}
				else if (choice == 2)
				{
					system("cls");
					std::cout << "Вы погибли от падения!";
					Sleep(5000);
					system("cls");
					std::cout << "Вы прошли на Нейтральную концовку - ничего не добившись вы погибли.";
					Sleep(10000);
					break;
				}
				else if (choice == 3)
				{
					system("cls");
					std::cout << "После вашего крика к зданию сцепилось больше зомби\nВы увидели кого-то на другом здании, но он сразу скрылся\nВскоре вы погибли от нехватки ресурсов.";
					Sleep(8000);
					system("cls");
					std::cout << "Вы прошли на Нейтральную концовку - ничего не добившись вы погибли, но узнали что выжившие не выдумка";
					Sleep(10000);
					break;
				}
			}
			else if (choice == 2)
			{
				system("cls");
				std::cout << "Вы решили убежать обратно, но упали с крышы и на звук пришла вся толпа. При падении вы сильно повредили ногу\n 1 - атаковать    \n2 - бежать";
				std::cin >> choice;
				if (choice == 1)
				{
					system("cls");
					std::cout << "С поврежденной ногой вы не смогли отбиться и погибли!\n";
					Sleep(8000);
					system("cls");
					std::cout << "Вы прошли на Нейтральную концовку - ничего не добившись вы погибли.";
					Sleep(10000);
					break;
				}
			}
		}
	}
}
