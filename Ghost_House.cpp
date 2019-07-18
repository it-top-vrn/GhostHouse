/*
�������� ������
���� "��� � ������������"
� ���� ����� ������ ��� �����, ����� ���������� �� ��������. ���� ���������� ���� ���������, �� ����� ������ ���� �����.
����� 3 �����.
�� ������� ���� ���� ����������: LEVEL - ������� ������ �������; HEART - ���������� ���������� ���������� ������; FLOOR - ����������, �� ����� �� �����.
*/


#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void Name();

void Start(); // ��������

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

	int start; // ���������� ������������� ������� � ���������� ����� �� ���� ������

	int level = 1; // ���������� ������� ����

	int heart = 3; // ���������� ���������� ������

	int floor = 1;

	int ghost_choise; // ���������� ����� ����� �����������

	int user_choise; // ���������� ����� ����� �������

	// ����������� �������� ���� � ��������
	
	Name();

	Start();

	cout << "\n\n�� ������ ������?\t�� - 1, \t��� - 2 \t"; cin >> start;

	

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
			cout << "\n��������� ������ �����������!!!\n\n";
			cout << "\n\n�� ������ ������?\t�� - 1, \t��� - 2 \t"; cin >> start;
		}
	}

	}

	system("cls");

	// ����������� �������� ������ 
	Name();
		
	Description();

	cout << "\n\n\t\t\t����������?\t�� - 1, \t��� - 2 \t"; cin >> start;

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
			cout << "\n��������� ������ �����������!!!\n\n";
			cout << "\n\n����������?\t�� - 1, \t��� - 2 \t"; cin >> start;
		}
	}
	}

	// ���� ���� ����� ����������, ���� ���������� ������ �� ������ ����� 0

	while (heart != 0 && floor != 4)
	{
		system("cls");
		
		Name();

		cout << "\n\tLEVEL : " << level << "\tHEART : " << heart << "\tFLOOR : " << floor << endl << endl << endl; // ������ ���������� ������� �������, ���������� ������ � ����, �� ������� ��������� �����
		
		ghost_choise = rand() % 3 + 1; // ��������� �������� �����

		// cout << ghost_choise;

		cout << "\n\t�������� �����, ����� ����� ���������!\n\n";

		Choise(); // ������������ ��� �������� �����

			   
		cout << "\n\t��� ����� - "; cin >> user_choise;
		
		(user_choise == ghost_choise) ? heart = heart - 1 : heart = heart;

		while (user_choise != 1 && user_choise != 2 && user_choise != 3) /////////////
		{
			cout << "\n��������� ������ �����������!!!\n\n";
			cout << "\n\n�������� ����� 1 ��� 2 ��� 3\t"; cin >> user_choise;
		}

		if (user_choise != ghost_choise && user_choise == 1) // ������� ���� � ������ ����� 1
		{
			system("cls");
			
			Name();
			
			LeftDoorUser();

			cout << "\n\n\t\t\t�� ������ ���� ������ ?\t�� - 1, \t��� - 2 \t"; cin >> start;

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
					cout << "\n��������� ������ �����������!!!\n\n";
					cout << "\n\n�� ������ ������?\t�� - 1, \t��� - 2 \t"; cin >> start;
				}
			}
			}


		}

		

		if (user_choise != ghost_choise && user_choise == 2) // ������� ���� � ������ ����� 2
		{
			system("cls");

			Name();

			MiddleDoorUser();

			cout << "\n\n\t\t\t�� ������ ���� ������ ?\t�� - 1, \t��� - 2 \t"; cin >> start;

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
					cout << "\n��������� ������ �����������!!!\n\n";
					cout << "\n\n�� ������ ������?\t�� - 1, \t��� - 2 \t"; cin >> start;
				}
			}
			}
		}

		if (user_choise != ghost_choise && user_choise == 3) // ������� ���� � ������ ����� 3
		{
			system("cls");

			Name();

			RightDoorUser();

			cout << "\n\n\t\t\t�� ������ ���� ������ ?\t�� - 1, \t��� - 2 \t"; cin >> start;

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
					cout << "\n��������� ������ �����������!!!\n\n";
					cout << "\n\n�� ������ ������?\t�� - 1, \t��� - 2 \t"; cin >> start;
				}
			}
			}
		}
		

		if (user_choise == ghost_choise && user_choise == 1) // ���� ������ ����� 1, �� �������� ����������
		{
			system("cls");

			Name();

			LeftDoorGhost();

			cout << "\n\n\t\t\t�� ������ ���� ������ ?\t�� - 1, \t��� - 2 \t"; cin >> start;

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
					cout << "\n��������� ������ �����������!!!\n\n";
					cout << "\n\n�� ������ ������?\t�� - 1, \t��� - 2 \t"; cin >> start;
				}
			}
			}
		}

		if (user_choise == ghost_choise && user_choise == 2) // ���� ������ ����� 2, �� �������� ����������
		{
			system("cls");

			Name();

			MiddleDoorGhost();

			cout << "\n\n\t\t\t�� ������ ���� ������ ?\t�� - 1, \t��� - 2 \t"; cin >> start;

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
					cout << "\n��������� ������ �����������!!!\n\n";
					cout << "\n\n�� ������ ������?\t�� - 1, \t��� - 2 \t"; cin >> start;
				}
			}
			}
		}

		if (user_choise == ghost_choise && user_choise == 3) // ���� ������ ����� 3, �� �������� ����������
		{
			system("cls");

			Name();

			RightDoorGhost();

			cout << "\n\n\t\t\t�� ������ ���� ������ ?\t�� - 1, \t��� - 2 \t"; cin >> start;

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
					cout << "\n��������� ������ �����������!!!\n\n";
					cout << "\n\n�� ������ ������?\t�� - 1, \t��� - 2 \t"; cin >> start;
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
				cout << "\n��������� ������ �����������!!!\n\n";
				cout << "\n\n�� ������ ������?\t�� - 1, \t��� - 2 \t"; cin >> start;
		}
		
		
		level++; // ���������� ������� � ������ ��������

		

	}

	system("cls");
	
	// ���������� ����: 

	Name();

	if (heart == 0) // ���� ��������� �����
	{
		cout << "\n\n\t\t\t!!! � ��� ��������� ����� !!!\n\n";
		cout << "\n\n\t\t\t    !!! �� ��������� !!!\n\n";

		Loss();
	}

	else if (floor == 4) // ���� �������� 3 �����
	{
		cout << "\n\t\t\t    !!! �� ������� !!!\n\n";
		cout << "\n\t\t\t!!! ��������� ������� !!!\n\n";

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

	cout << "\t(c) ������������ �������� ���. �������\n";
	cout << "\t(c) �������� ������, �������� ������\n";

}

void Description()
{
	cout << "\n\n\t\t���� ��������� ����� ��������� � ����� �� �� ������� ������� ����.\n";
	cout << "\n\t\t\t� ���� ��� �����! ��������� �������� ����������.\n";
	cout << "\n\t\t\t  !!! ������ ��� ����� � ����� ��������� !!!.\n\n";
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

	cout << "\t\t\t !!! ���������� ������ �� ��� !!!\n\n";
	cout << "\t\t\t  !!! �� �������� ���� ����� !!!\n\n\n";

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

		cout << "\t\t\t !!! ���������� ������ �� ��� !!!\n\n";
		cout << "\t\t\t  !!! �� �������� ���� ����� !!!\n\n\n";

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

		cout << "\t\t\t !!! ���������� ������ �� ��� !!!\n\n";
		cout << "\t\t\t  !!! �� �������� ���� ����� !!!\n\n\n";

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

		cout << "\t\t\t����������� !!! ���������� ��� �� ����� !!!\n\n";
		cout << "\t\t\t   �� ���������� �� ��������� ���� !!!\n\n\n";

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

		cout << "\t\t\t����������� !!! ���������� ��� �� ����� !!!\n\n";
		cout << "\t\t\t   �� ���������� �� ��������� ���� !!!\n\n\n";

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

		cout << "\t\t\t����������� !!! ���������� ��� �� ����� !!!\n\n";
		cout << "\t\t\t   �� ���������� �� ��������� ���� !!!\n\n\n";

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
		
		cout << "\t\t             �� - �� -�� !!!    \n";
		cout << "\t\t                                                                  \n";
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