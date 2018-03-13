#include <stdio.h>
#include <iostream>
#include <time.h>
#include "Vizov.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	while (true)
	{
		unsigned short int nz;
		cout << "Vedite nomer zd  : ";
		cin >> nz;

		if (nz == 1)
		{
			/*Напишите короткую программу на C, которая объявляет и инициализирует (любому интересующему вас значению) double, int и char. 
			Затем объявите и инициализируйте указатель на каждый из три переменные. 
			Затем ваша программа должна распечатать адрес и значение сохраненный в памяти и размер памяти (в байтах) каждой из шести переменных. */
			system("cls");
			int One = 11; double Two = 2.457; char Three = 'С';
			int* ptrOne = &One; double* ptrTwo = &Two; char* ptrThree = &Three;

			dr(One, *ptrOne);
			dr(Two, *ptrTwo);
			dr(Three, *ptrThree);
		}

		else if (nz == 2)
		{
			/*Используйте спецификатор форматирования «0x% x» для печати адресов в шестнадцатеричном формате.Вы должны видеть адреса, которые выглядят примерно так : «0xbfe55918».
			Начальный символы «0x» говорят вам, что используется шестнадцатеричная нотация; остаток цифр выдает адрес.*/
			system("cls");
			int mas[9], count = 0;
			int *ptrMas = mas;
			cout << endl;
			for (int i = 0; i < 9; i++)
			{
				mas[i] = 10 + rand() % 90;
				count++;
				printf("%d.mas[%d] = %d   (0x%p)\n", count, i, mas[i], ptrMas);
				ptrMas++;
			}
			cout << endl;
		}

		else if (nz == 3)
		{
			/*Используйте оператор sizeof для определения размера памяти, выделенной для каждого переменная*/
			system("cls");
			int Int;
			float Float;
			double Double;
			char Char;

			printf("\nint zanimaet - %i baita v pamyati\n", sizeof(Int));
			printf("float zanimaet - %i baita v pamyati\n", sizeof(Float));
			printf("double zanimaet - %i bait v pamyati\n", sizeof(Double));
			printf("char zanimaet - %i bait v pamyati\n\n", sizeof(Char));
		}

		else if (nz == 4)
		{
			/*Напишите программу в C, чтобы преобразовать десятичное число в шестнадцатеричное.*/
			system("cls");
			cout << endl;
			char mas[10]; int chislo;
			for (int i = 0; i < 10; i++)
			{
				chislo = 111111 + rand() % 99999999;
				Preobrazovanie(mas, chislo);
				printf("Desyatichnoe - %d - %s Shestnadcaterichnoe\n", chislo, mas);
			}
			cout << endl;
		}

		else if (nz == 5)
		{
			/*Напишите программу c для чтения времени в формате HH24: MM: SS с использованием оператора single scanf (), убедитесь, 
			что входное значение должно быть правильным, если входные значения неверны, прочитайте их рекурсивно; распечатать время в HH24: MM: SS, если значения верны.*/
			system("cls");
			//Разве мы проходили этого оператора?
		}
		else if (nz == 6)
		{
			/*Напишите программу c для ввода и печати возраста, который должен быть больше 18 и менее 30 лет,
			необходимо проверить возрастную проверку и ввести возраст рекурсивно до тех пор, пока значение возраста не будет действительным.*/
			system("cls");
			Rec();
		}
		else if (nz == 7)
		{
			/*Напишите программу c для ввода n чисел, напечатайте их сумму и наибольшее число, не сохраняя их в массиве.*/
			system("cls");
			int n;
			printf("\nVvedite n: ");
			scanf("%d",&n);
			MaxSum(n);
		}

		else if (nz == 666)
		{
			break;
			system("exit");
		}
		else
		{
			system("cls");
			cout << "Takogo zd net";
		}
	}
}