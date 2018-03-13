#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

int dr(int zn, int uk)
{
	printf("\nAdress One - %p, znachenie One - %d, razmer One - %i baita\n", &zn, uk, sizeof(zn));
	printf("Adres ptrOne - %p, znachenie ptrOne - %p, razmer ptrOne - %i baita\n\n", &uk, uk, sizeof(zn));
	return 0;
}

double dr(double zn, int uk)
{
	printf("Adress Two - %p, znachenie Two - %g, razmer Two - %i bait\n", &zn, zn, sizeof(zn));
	printf("Adres ptrTwo - %p, znachenie ptrTwo - %p, razmer ptrTwo - %i baita\n\n", &uk, uk, sizeof(zn));
	return 0;
}

char dr(char zn, int uk)
{
	printf("Adress Three - %p, znachenie Three - %d, razmer Three - %i bait\n", &zn, zn, sizeof(zn));
	printf("Adres ptrThree - %p, znachenie ptrThree - %p, razmer ptrThree - %i bait\n\n", &uk, uk, sizeof(zn));
	return 0;
}

void Rec()
{
	int vozrast;
	cout << "\nVvedite vozrast ";
	cin >> vozrast;

	if (vozrast > 18 && vozrast < 30)
	{
		cout << "VI Veli chislo " << vozrast << endl<<endl;
	}
	else
	{
		Rec();
	}

}

void MaxSum(int n)
{
	int sum = 0, max, m,count=1;
	for (int i = 0; i < n; i++)
	{
		m= rand() % 100;
		printf("%d chsilo = %d\n", count++, m);
		sum += m;
		if (i == 0) 
			max = m;
		else
		{
			if (m > max)
				max = m;
		}
	}
	cout << "Summa = " << sum << endl;
	cout << "Max element = " << max << endl<<endl;
}

void Preobrazovanie(char*mas, int num)
{
	int rez, ost, step = 0;
	rez = num;
	while (rez > 15)
	{
		if (rez < 15)ost = rez;
		ost = rez % 16;
		rez = rez / 16;
		if (ost < 10)
			mas[step] = ost + '0';
		else if (ost == 10)
			mas[step] = 'A';
		else if (ost == 11)
			mas[step] = 'B';
		else if (ost == 12)
			mas[step] = 'C';
		else if (ost == 13)
			mas[step] = 'D';
		else if (ost == 14)
			mas[step] = 'E';
		else if (ost == 15)
			mas[step] = 'F';

		step++;

		if (rez < 15)
		{
			ost = rez;
			if (ost < 10)
				mas[step] = ost + '0';
			else if (ost == 10)
				mas[step] = 'A';
			else if (ost == 11)
				mas[step] = 'B';
			else if (ost == 12)
				mas[step] = 'C';
			else if (ost == 13)
				mas[step] = 'D';
			else if (ost == 14)
				mas[step] = 'E';
			else if (ost == 15)
				mas[step] = 'F';
		}

	}
	int st = 0, end = step, kol = step / 2;
	char vrem;
	for (int i = 0; i <= kol; i++)
	{
		vrem = mas[end];
		mas[end] = mas[st];
		mas[st] = vrem;
		st++;
		end--;
	}
	mas[step + 1] = '\0';
}