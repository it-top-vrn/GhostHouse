/*
VERSION: 0.1
AUTHOR: Dolzhenko Andrey
COPYRIGHT: © Dolzhenko Andrey, 2019; © Компьютерная академия ШАГ. Воронеж, 2019
LICENSE: MIT License
DESCRIPTION:
Ghost House (или Дом с привидениями) - это консольная игра-угадайка.
В игре нужно пройти три этажа, чтобы привидение не заметило. Если привидение тебя обнаружит, то игрок теряет одну жизнь.
Всего 3 жизни.
На игровом поле есть индикаторы: LEVEL - считает каждую попытку; HEART - показывает оставшееся количество жизней; FLOOR - показывает, на каком ты этаже.
*/
/*
MIT License
Copyright (c) 2019 Dolzhenko Andrey, Компьютерная академия ШАГ. Воронеж
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void Name();
void Start(); // Заставка
void Description();
void Choise();
void LeftDoorGhost();
void MiddleDoorGhost();
void RightDoorGhost();
void LeftDoorUser();
void MiddleDoorUser();
void RightDoorUser();
void Win();
void Loss();

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	char number;
	int start; // переменная останавливает функцию и спрашивает нужно ли идти дальше
	int level = 1; // определяет уровень игры
	int heart = 3; // определяет количество жизней
	int floor = 1;
	int ghost_choise; // определяет выбор двери привидением
	int user_choise; // определяет выбор двери игроком
	// Запускается название игры и заставка	
	Name();
	Start();
	cout << "\n\nВы готовы начать?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
	switch (start)
	{
	case 1:
	{
		break;
	}
	case 2:
	{
		return 0;
	}
	default:
	{
		while (start != 1 && start != 2)
		{
			cout << "\nВведенный символ некорректен!!!\n\n";
			cout << "\n\nВы готовы начать?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
		}
	}
	}
	system("cls");
	// запускается описание сюжета 
	Name();		
	Description();
	cout << "\n\n\t\t\tПРОДОЛЖАЕМ?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
	switch (start)
	{
	case 1:
	{
		break;
	}
	case 2:
	{
		return 0;;
	}
	default:
	{
		while (start != 1 && start != 2)
		{
			cout << "\nВведенный символ некорректен!!!\n\n";
			cout << "\n\nПРОДОЛЖАЕМ?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
		}
	}
	}
	// цикл игры будет повторятся, пока количество сердец не станет равно 0
	while (heart != 0 && floor != 4)
	{
		system("cls");		
		Name();
		cout << "\n\tLEVEL : " << level << "\tHEART : " << heart << "\tFLOOR : " << floor << endl << endl << endl; // Строка отображает текущий уровень, количество жизней и этаж, на котором находится герой
		ghost_choise = rand() % 3 + 1; // Компьютер выбирает дверь
		// cout << ghost_choise;
		cout << "\n\tВыберите дверь, чтобы найти принцессу!\n\n";
		Choise(); // отображаются все закрытые двери			   
		cout << "\n\tВаш выбор - "; cin >> user_choise;		
		(user_choise == ghost_choise) ? heart = heart - 1 : heart = heart;
		while (user_choise != 1 && user_choise != 2 && user_choise != 3) /////////////
		{
			cout << "\nВведенный символ некорректен!!!\n\n";
			cout << "\n\nВыберите цифру 1 или 2 или 3\t"; cin >> user_choise;
		}
		if (user_choise != ghost_choise && user_choise == 1) // выиграл юзер и выбрал дверь 1
		{
			system("cls");			
			Name();			
			LeftDoorUser();
			cout << "\n\n\t\t\tВЫ ГОТОВЫ ИДТИ ДАЛЬШЕ ?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
			switch (start)
			{
			case 1:
			{
				break;
			}
			case 2:
			{
				return 0;;
			}
			default:
			{
				while (start != 1 && start != 2)
				{
					cout << "\nВведенный символ некорректен!!!\n\n";
					cout << "\n\nВы готовы начать?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
				}
			}
			}
		}
		if (user_choise != ghost_choise && user_choise == 2) // выиграл юзер и выбрал дверь 2
		{
			system("cls");
			Name();
			MiddleDoorUser();
			cout << "\n\n\t\t\tВЫ ГОТОВЫ ИДТИ ДАЛЬШЕ ?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
			switch (start)
			{
			case 1:
			{
				break;
			}
			case 2:
			{
				return 0;;
			}
			default:
			{
				while (start != 1 && start != 2)
				{
					cout << "\nВведенный символ некорректен!!!\n\n";
					cout << "\n\nВы готовы начать?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
				}
			}
			}
		}
		if (user_choise != ghost_choise && user_choise == 3) // выиграл юзер и выбрал дверь 3
		{
			system("cls");
			Name();
			RightDoorUser();
			cout << "\n\n\t\t\tВЫ ГОТОВЫ ИДТИ ДАЛЬШЕ ?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
			switch (start)
			{
			case 1:
			{
				break;
			}
			case 2:
			{
				return 0;;
			}
			default:
			{
				while (start != 1 && start != 2)
				{
					cout << "\nВведенный символ некорректен!!!\n\n";
					cout << "\n\nВы готовы начать?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
				}
			}
			}
		}
		if (user_choise == ghost_choise && user_choise == 1) // юзер выбрал дверь 1, но выиграло привидение
		{
			system("cls");
			Name();
			LeftDoorGhost();
			cout << "\n\n\t\t\tВЫ ГОТОВЫ ИДТИ ДАЛЬШЕ ?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
			switch (start)
			{
			case 1:
			{
				break;
			}
			case 2:
			{
				return 0;;
			}
			default:
			{
				while (start != 1 && start != 2)
				{
					cout << "\nВведенный символ некорректен!!!\n\n";
					cout << "\n\nВы готовы начать?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
				}
			}
			}
		}
		if (user_choise == ghost_choise && user_choise == 2) // юзер выбрал дверь 2, но выиграло привидение
		{
			system("cls");
			Name();
			MiddleDoorGhost();
			cout << "\n\n\t\t\tВЫ ГОТОВЫ ИДТИ ДАЛЬШЕ ?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
			switch (start)
			{
			case 1:
			{
				break;
			}
			case 2:
			{
				return 0;;
			}
			default:
			{
				while (start != 1 && start != 2)
				{
					cout << "\nВведенный символ некорректен!!!\n\n";
					cout << "\n\nВы готовы начать?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
				}
			}
			}
		}
		if (user_choise == ghost_choise && user_choise == 3) // юзер выбрал дверь 3, но выиграло привидение
		{
			system("cls");
			Name();
			RightDoorGhost();
			cout << "\n\n\t\t\tВЫ ГОТОВЫ ИДТИ ДАЛЬШЕ ?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
			switch (start)
			{
			case 1:
			{
				break;
			}
			case 2:
			{
				return 0;;
			}
			default:
			{
				while (start != 1 && start != 2)
				{
					cout << "\nВведенный символ некорректен!!!\n\n";
					cout << "\n\nВы готовы начать?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
				}
			}
			}
		}			
		if (user_choise != ghost_choise)
		{
			floor += 1;
		}
		else if (user_choise != 1 && user_choise != 2 && user_choise != 3)
		{
				cout << "\nВведенный символ некорректен!!!\n\n";
				cout << "\n\nВы готовы начать?\tДА - 1, \tНЕТ - 2 \t"; cin >> start;
		}		
		level++; // изменяется уровень с каждой попыткой
	}
	system("cls");	
	// Завершение игры: 
	Name();
	if (heart == 0) // если кончились жизни
	{
		cout << "\n\n\t\t\t!!! У ВАС КОНЧИЛИСЬ ЖИЗНИ !!!\n\n";
		cout << "\n\n\t\t\t    !!! ВЫ ПРОИГРАЛИ !!!\n\n";
		Loss();
	}
	else if (floor == 4) // если пройдены 3 этажа
	{
		cout << "\n\t\t\t    !!! ВЫ ВЫГРАЛИ !!!\n\n";
		cout << "\n\t\t\t!!! ПРИНЦЕССА СПАСЕНА !!!\n\n";
		Win();
		cout << endl;
	}	
	int konec;
	cin >> konec;
}
void Name()
{
	cout << "\n\n";
	cout << "\t\t **   *      **    **   *****\t\t*  *   **   *  *   **   ****\n";
	cout << "\t\t*  *  *     *  *  *  *  *****\t\t*  *  *  *  *  *  *  *  *   \n";
	cout << "\t\t*     *     *  *  *       *  \t\t*  *  *  *  *  *  *     *   \n";
	cout << "\t\t* **  ***   *  *   *      *  \t\t****  *  *  *  *   *    ****\n";
	cout << "\t\t*  *  *  *  *  *     *    *  \t\t*  *  *  *  *  *     *  *   \n";
	cout << "\t\t*  *  *  *  *  *  *  *    *  \t\t*  *  *  *  *  *  *  *  *   \n";
	cout << "\t\t **   *  *   **    **     *  \t\t*  *   **    **    **   ****\n";
	cout << endl << endl;
	cout << "\t---------------------------------------------------------------------------------\n\n\n";
}
void Start()
{
	cout << "\t                *************  \t\t*************  \t\t*************  \n";
	cout << "\t                *           ** \t\t*           ** \t\t*           ** \n";
	cout << "\t                *  ******   ***\t\t*           ***\t\t*           ***\n";
	cout << "\t                * * ** ** * ***\t\t*           ***\t\t*           ***\n";
	cout << "\t                * *   *   * ***\t\t*           ***\t\t*           ***\n";
	cout << "\t    ******      * * ,___, * ***\t\t*           ***\t\t*           ***\n";
	cout << "\t   * ** ** *    * *       * ***\t\t*           ***\t\t*           ***\n";
	cout << "\t   *   *   *    *   *****   ***\t\t*           ***\t\t*           ***\n";
	cout << "\t   * ,__, *     *    ***    ***\t\t*           ***\t\t*           ***\n";
	cout << "\t     ****       *      *    ***\t\t*           ***\t\t*           ***\n";
	cout << "\t    * ** *      *       *   ***\t\t*           ***\t\t*           ***\n";
	cout << "\t   *  **  *     *           ***\t\t*           ***\t\t*           ***\n";
	cout << "\t     *  *       ***************\t\t***************\t\t***************\n";
	cout << "\t    *    *                   **\t\t             **\t\t             **\n";
	cout << "\t                              *\t\t              *\t\t              *\n";
	cout << "\n\n\n";
	cout << "\t(c) Долженко Андрей\n";
	cout << "\t(c) Компьютерная академия ШАГ. Воронеж\n";
}
void Description()
{
	cout << "\n\n\t\tЗлой ВОЛШЕБНИК украл ПРИНЦЕССУ и запер ее на чердаке СТАРОГО ДОМА.\n";
	cout << "\n\t\t\tВ доме ТРИ этажа! ПРИНЦЕССУ охраняет ПРИВИДЕНИЕ.\n";
	cout << "\n\t\t\t  !!! Пройди ВСЕ этажи и СПАСИ ПРИНЦЕССУ !!!.\n\n";
	cout << "\t---------------------------------------------------------------------------------\n\n\n";
}
void Choise()
{

	cout << "\n\n\n";
	cout << "\t                *************  \t\t*************  \t\t*************  \n";
	cout << "\t                ****** ******  \t\t****** ******  \t\t****** ******  \n";
	cout << "\t                ***** * *****  \t\t***** * *****  \t\t***** * *****  \n";
	cout << "\t                **** *** ****  \t\t**** *** ****  \t\t**** *** ****  \n";
	cout << "\t                *** ***** ***  \t\t*** ***** ***  \t\t*** ***** ***  \n";
	cout << "\t    ******      ** ******* **  \t\t** ******* **  \t\t** ******* **  \n";
	cout << "\t   * ** ** *    * **  ***** *  \t\t* **  ***** *  \t\t* **  ***** *  \n";
	cout << "\t   *   *   *    ** ******* **  \t\t** ******* **  \t\t** ******* **  \n";
	cout << "\t   * ,__, *     *** ***** ***  \t\t*** ***** ***  \t\t*** ***** ***  \n";
	cout << "\t     ****       **** *** ****  \t\t**** *** ****  \t\t**** *** ****  \n";
	cout << "\t    * ** *      ***** * *****  \t\t***** * *****  \t\t***** * *****  \n";
	cout << "\t   *  **  *     ****** ******  \t\t****** ******  \t\t****** ******  \n";
	cout << "\t     *  *       *************  \t\t*************  \t\t*************  \n";
	cout << "\t    *    *                     \t\t               \t\t               \n";
	cout << "\t                      1.       \t\t      2.       \t\t      3.       \n";
	cout << "\n\n";
}

void LeftDoorGhost()
{
	cout << "\n\n";
	cout << "\t\t\t !!! ПРИВИДЕНИЕ НАПАЛО НА ВАС !!!\n\n";
	cout << "\t\t\t  !!! ВЫ ПОТЕРЯЛИ ОДНУ ЖИЗНЬ !!!\n\n\n";
	cout << "\t                *************  \t\t*************  \t\t*************  \n";
	cout << "\t                *           ** \t\t****** ******  \t\t****** ******  \n";
	cout << "\t                *  ******   ***\t\t***** * *****  \t\t***** * *****  \n";
	cout << "\t                * * ** ** * ***\t\t**** *** ****  \t\t**** *** ****  \n";
	cout << "\t                * *   *   * ***\t\t*** ***** ***  \t\t*** ***** ***  \n";
	cout << "\t    ******      * * ,___, * ***\t\t** ******* **  \t\t** ******* **  \n";
	cout << "\t   * ** ** *    * *       * ***\t\t* **  ***** *  \t\t* **  ***** *  \n";
	cout << "\t   *   *   *    *   *****   ***\t\t** ******* **  \t\t** ******* **  \n";
	cout << "\t   * ,__, *     *    ***    ***\t\t*** ***** ***  \t\t*** ***** ***  \n";
	cout << "\t     ****       *      *    ***\t\t**** *** ****  \t\t**** *** ****  \n";
	cout << "\t    * ** *      *       *   ***\t\t***** * *****  \t\t***** * *****  \n";
	cout << "\t   *  **  *     *           ***\t\t****** ******  \t\t****** ******  \n";
	cout << "\t     *  *       ***************\t\t*************  \t\t*************  \n";
	cout << "\t    *    *                   **\t\t               \t\t               \n";
	cout << "\t                      1.      *\t\t      2.       \t\t      3.       \n";
	cout << "\n\n\n";
}
	void MiddleDoorGhost()
	{
		cout << "\n\n";
		cout << "\t\t\t !!! ПРИВИДЕНИЕ НАПАЛО НА ВАС !!!\n\n";
		cout << "\t\t\t  !!! ВЫ ПОТЕРЯЛИ ОДНУ ЖИЗНЬ !!!\n\n\n";
		cout << "\t                *************  \t\t*************  \t\t*************  \n";
		cout << "\t                ****** ******  \t\t*           ** \t\t****** ******  \n";
		cout << "\t                ***** * *****  \t\t*  ******   ***\t\t***** * *****  \n";
		cout << "\t                **** *** ****  \t\t* * ** ** * ***\t\t**** *** ****  \n";
		cout << "\t                *** ***** ***  \t\t* *   *   * ***\t\t*** ***** ***  \n";
		cout << "\t    ******      ** ******* **  \t\t* * ,___, * ***\t\t** ******* **  \n";
		cout << "\t   * ** ** *    * **  ***** *  \t\t* *       * ***\t\t* **  ***** *  \n";
		cout << "\t   *   *   *    ** ******* **  \t\t*   *****   ***\t\t** ******* **  \n";
		cout << "\t   * ,__, *     *** ***** ***  \t\t*    ***    ***\t\t*** ***** ***  \n";
		cout << "\t     ****       **** *** ****  \t\t*      *    ***\t\t**** *** ****  \n";
		cout << "\t    * ** *      ***** * *****  \t\t*       *   ***\t\t***** * *****  \n";
		cout << "\t   *  **  *     ****** ******  \t\t*           ***\t\t****** ******  \n";
		cout << "\t     *  *       *************  \t\t***************\t\t*************  \n";
		cout << "\t    *    *                     \t\t             **\t\t               \n";
		cout << "\t                      1.       \t\t      2.      *\t\t      3.       \n";
		cout << "\n\n\n";
	}
	void RightDoorGhost()
	{
		cout << "\n\n";
		cout << "\t\t\t !!! ПРИВИДЕНИЕ НАПАЛО НА ВАС !!!\n\n";
		cout << "\t\t\t  !!! ВЫ ПОТЕРЯЛИ ОДНУ ЖИЗНЬ !!!\n\n\n";
		cout << "\t                *************  \t\t*************  \t\t*************  \n";
		cout << "\t                ****** ******  \t\t****** ******  \t\t*           ** \n";
		cout << "\t                ***** * *****  \t\t***** * *****  \t\t*  ******   ***\n";
		cout << "\t                **** *** ****  \t\t**** *** ****  \t\t* * ** ** * ***\n";
		cout << "\t                *** ***** ***  \t\t*** ***** ***  \t\t* *   *   * ***\n";
		cout << "\t    ******      ** ******* **  \t\t** ******* **  \t\t* * ,___, * ***\n";
		cout << "\t   * ** ** *    * **  ***** *  \t\t* **  ***** *  \t\t* *       * ***\n";
		cout << "\t   *   *   *    ** ******* **  \t\t** ******* **  \t\t*   *****   ***\n";
		cout << "\t   * ,__, *     *** ***** ***  \t\t*** ***** ***  \t\t*    ***    ***\n";
		cout << "\t     ****       **** *** ****  \t\t**** *** ****  \t\t*      *    ***\n";
		cout << "\t    * ** *      ***** * *****  \t\t***** * *****  \t\t*       *   ***\n";
		cout << "\t   *  **  *     ****** ******  \t\t****** ******  \t\t*           ***\n";
		cout << "\t     *  *       *************  \t\t*************  \t\t***************\n";
		cout << "\t    *    *                     \t\t               \t\t             **\n";
		cout << "\t                      1.       \t\t      2.       \t\t      3.      *\n";
		cout << "\n\n";
	}
	void LeftDoorUser()
	{
		cout << "\n\n";
		cout << "\t\t\tПОЗДРАВЛЯЕМ !!! ПРИВИДЕНИЕ ВАС НЕ НАШЛО !!!\n\n";
		cout << "\t\t\t   ВЫ ПЕРЕХОДИТЕ НА СЛЕДУЮЩИЙ ЭТАЖ !!!\n\n\n";
		cout << "\t                *************  \t\t*************  \t\t*************  \n";
		cout << "\t                *           ** \t\t****** ******  \t\t****** ******  \n";
		cout << "\t                *           ***\t\t***** * *****  \t\t***** * *****  \n";
		cout << "\t                *           ***\t\t**** *** ****  \t\t**** *** ****  \n";
		cout << "\t                *           ***\t\t*** ***** ***  \t\t*** ***** ***  \n";
		cout << "\t    ******      *           ***\t\t** ******* **  \t\t** ******* **  \n";
		cout << "\t   * ** ** *    *           ***\t\t* **  ***** *  \t\t* **  ***** *  \n";
		cout << "\t   *   *   *    *           ***\t\t** ******* **  \t\t** ******* **  \n";
		cout << "\t   * ,__, *     *           ***\t\t*** ***** ***  \t\t*** ***** ***  \n";
		cout << "\t     ****       *           ***\t\t**** *** ****  \t\t**** *** ****  \n";
		cout << "\t    * ** *      *           ***\t\t***** * *****  \t\t***** * *****  \n";
		cout << "\t   *  **  *     *           ***\t\t****** ******  \t\t****** ******  \n";
		cout << "\t     *  *       ***************\t\t*************  \t\t*************  \n";
		cout << "\t    *    *                   **\t\t               \t\t               \n";
		cout << "\t                      1.      *\t\t      2.       \t\t      3.       \n";
		cout << "\n\n";
	}
	void MiddleDoorUser()
	{
		cout << "\n\n";
		cout << "\t\t\tПОЗДРАВЛЯЕМ !!! ПРИВИДЕНИЕ ВАС НЕ НАШЛО !!!\n\n";
		cout << "\t\t\t   ВЫ ПЕРЕХОДИТЕ НА СЛЕДУЮЩИЙ ЭТАЖ !!!\n\n\n";
		cout << "\t                *************  \t\t*************  \t\t*************  \n";
		cout << "\t                ****** ******  \t\t*           ** \t\t****** ******  \n";
		cout << "\t                ***** * *****  \t\t*           ***\t\t***** * *****  \n";
		cout << "\t                **** *** ****  \t\t*           ***\t\t**** *** ****  \n";
		cout << "\t                *** ***** ***  \t\t*           ***\t\t*** ***** ***  \n";
		cout << "\t    ******      ** ******* **  \t\t*           ***\t\t** ******* **  \n";
		cout << "\t   * ** ** *    * **  ***** *  \t\t*           ***\t\t* **  ***** *  \n";
		cout << "\t   *   *   *    ** ******* **  \t\t*           ***\t\t** ******* **  \n";
		cout << "\t   * ,__, *     *** ***** ***  \t\t*           ***\t\t*** ***** ***  \n";
		cout << "\t     ****       **** *** ****  \t\t*           ***\t\t**** *** ****  \n";
		cout << "\t    * ** *      ***** * *****  \t\t*           ***\t\t***** * *****  \n";
		cout << "\t   *  **  *     ****** ******  \t\t*           ***\t\t****** ******  \n";
		cout << "\t     *  *       *************  \t\t***************\t\t*************  \n";
		cout << "\t    *    *                     \t\t             **\t\t               \n";
		cout << "\t                      1.       \t\t      2.      *\t\t      3.       \n";
		cout << "\n\n";
	}
	void RightDoorUser()
	{
		cout << "\n\n";
		cout << "\t\t\tПОЗДРАВЛЯЕМ !!! ПРИВИДЕНИЕ ВАС НЕ НАШЛО !!!\n\n";
		cout << "\t\t\t   ВЫ ПЕРЕХОДИТЕ НА СЛЕДУЮЩИЙ ЭТАЖ !!!\n\n\n";
		cout << "\t                *************  \t\t*************  \t\t*************  \n";
		cout << "\t                ****** ******  \t\t****** ******  \t\t*           ** \n";
		cout << "\t                ***** * *****  \t\t***** * *****  \t\t*           ***\n";
		cout << "\t                **** *** ****  \t\t**** *** ****  \t\t*           ***\n";
		cout << "\t                *** ***** ***  \t\t*** ***** ***  \t\t*           ***\n";
		cout << "\t    ******      ** ******* **  \t\t** ******* **  \t\t*           ***\n";
		cout << "\t   * ** ** *    * **  ***** *  \t\t* **  ***** *  \t\t*           ***\n";
		cout << "\t   *   *   *    ** ******* **  \t\t** ******* **  \t\t*           ***\n";
		cout << "\t   * ,__, *     *** ***** ***  \t\t*** ***** ***  \t\t*           ***\n";
		cout << "\t     ****       **** *** ****  \t\t**** *** ****  \t\t*           ***\n";
		cout << "\t    * ** *      ***** * *****  \t\t***** * *****  \t\t*           ***\n";
		cout << "\t   *  **  *     ****** ******  \t\t****** ******  \t\t*           ***\n";
		cout << "\t     *  *       *************  \t\t*************  \t\t***************\n";
		cout << "\t    *    *                     \t\t               \t\t             **\n";
		cout << "\t                      1.       \t\t      2.       \t\t      3.      *\n";
		cout << "\n\n";
	}
	void Win()
	{
		cout << "\n";				
		cout << "\t\t                  ***  ***      \n";
		cout << "\t\t                 **********     \n";
		cout << "\t\t                  ********                     \n";
		cout << "\t\t                   ******                      \n";
		cout << "\t\t                     **         *  **  *      \n";
		cout << "\t\t    ******                       ******       \n";
		cout << "\t\t   * ** ** *                    * ** ** *    \n";
		cout << "\t\t   *   *   *                    *   *   *    \n";
		cout << "\t\t   * ,__, *                     *  ***  *     \n";
		cout << "\t\t     ****                         *****      \n";
		cout << "\t\t    * ** *                       * ** *      \n";
		cout << "\t\t   *  **  *                     *  **  *     \n";
		cout << "\t\t     *  *                         ****       \n";
		cout << "\t\t    *    *                       ******      \n";
		cout << "\t\t                                   * *    \n";
		cout << "\n\n";
	}
	void Loss()
	{
		cout << "\n\n";		
		cout << "\t\t             ХА - ХА -ХА !!!    \n";
		cout << "\t\t                                         \n";
		cout << "\t\t       *                       ******    \n";
		cout << "\t\t      **                      * ** ** *  \n";
		cout << "\t\t     ****                     *   *   *  \n";
		cout << "\t\t    ******                    * ,___, *  \n";
		cout << "\t\t   * ** ** *                  *       *  \n";
		cout << "\t\t   *   *   *                    *****    \n";
		cout << "\t\t   * **-** *                      ***     \n";
		cout << "\t\t     ****    *                      *     \n";
		cout << "\t\t    * ** *  *                        *    \n";
		cout << "\t\t   ** ** **                  \n";
		cout << "\t\t     ****        \n";
		cout << "\t\t    *    *                    \n\n";
		cout << "\t\t EVIL  WIZARD                            \n";
		cout << "\n\n\n";
	}
