#include "head.c"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define N "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450"

int euler1()
{
	int sum = 0;

	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}


	return sum;
}

long long int euler2()
{
	long long int sum = 0;
	long long int Fib1 = 0;
	long long int Fib2 = 1;
	long long int Fib3 = 1;
	while (Fib3 <= 4000000)
	{
		Fib1 = Fib3 + Fib2;
		Fib2 = Fib1 + Fib3;
		Fib3 = Fib1 + Fib2;

		if (Fib1 % 2 == 0)
			sum += Fib1;
		if (Fib2 % 2 == 0)
			sum += Fib2;
		if (Fib3 % 2 == 0)
			sum += Fib3;

	}
	return sum;
}

int Prime(unsigned long long a)
{
	unsigned long long i;
	unsigned long long b = (unsigned long long)sqrt((double)a);
	for (i = 2; i <= b; i++)
		if (a % i == 0) return 0;
	return 1;
}
void euler3()
{
	unsigned long long delimoe, result, delitel, d;
	delimoe = 600851475143;
	d = (unsigned long long)sqrt((double)delimoe);
	for (delitel = 3; delitel <= d; delitel += 2)
		if (delimoe % delitel == 0 && prime(delitel))
		{
			result = delimoe / delitel;
			if (prime(result))
			{
				delitel = result;
				printf("%llu\t%llu\n", delitel, delimoe / delitel);
				break;
			}
			else printf("%llu\t%llu\n", delitel, result);
		}
}



int DelCount(long long int num)
{
	int DelCount = 2;
	long int del = 2;
	for (; del <= sqrt(num); del++)
	{
		if (num % del == 0)
		{
			DelCount += 2;
		}
	}

	if (del * del == num)
		DelCount++;

	return DelCount;
}


long long int TriangCreate(int i)
{
	long long int num = 0;
	for (int j = 0; j <= i; j++)
	{
		num += j;
	}

	return num;
}


int isPrimeLong(long long int num)
{
	int NumDel = 2;
	if (num == pow(floor(sqrt(num)), 2))
		NumDel--;
	for (int i = 2; i < sqrt(num); i++)
	{
		if (i % num == 0)
			NumDel += 2;
	}

	if (NumDel == 2)
		return 1;
	else
		return 0;
}

int isPal(int x)
{
	int reversed = 0;
	int t = x;
	while (t > 0)
	{
		reversed = 10 * reversed + t % 10;
		t = t / 10;
	}
	if (reversed == x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int euler4()
{
	int a = 999;
	int b = 999;
	int LargPal = 0;
	while (a >= 100)
	{
		b = 999;
		while (b >= a)
		{
			if (a * b <= LargPal)
				break;
			if (isPal(a * b))
			{
				LargPal = a * b;
			}
			b--;
		}
		a--;
	}

	return LargPal;
}


int euler5()
{
	int x = 2;

	while (x)
	{
		int i = 1;

		for (i; i < 21; i++)
		{
			if (x % i != 0)
				break;
		}

		if (i == 21)
			break;

		x++;
	}
	return x;
}

unsigned long long euler6()
{
	unsigned long long SumOfSqr = 0;
	unsigned long long SqrSum = 0;

	for (unsigned long long i = 1; i <= 100; i++)
	{
		SumOfSqr += i * i;
		SqrSum += i;
	}

	SqrSum *= SqrSum;

	unsigned long long Diff = 0;
	Diff = SqrSum - SumOfSqr;

	return Diff;
}

unsigned long long euler7()
{
	unsigned long long x = 2;
	int i = 1;

	while (i <= 10001)
	{
		if (DelCount(x) == 2)
		{
			i++;
		}

		x++;
	}
	x--;
	return x;
}

unsigned long long euler8()
{
	char ThousandDigitWord[1000] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	int arr[1000] = { 0 };
	unsigned long long Multiple = 1;
	unsigned long long MaxMultiple = 0;
	for (int i = 0; i < 1000; i++)
	{
		arr[i] = ThousandDigitWord[i] - 48;
	}
	int i = 0;
	for (; i < 987; i++)
	{

		for (int j = 0; j < 13; j++)
		{
			Multiple *= arr[i + j];
		}
		if (MaxMultiple < Multiple)
			MaxMultiple = Multiple;

		Multiple = 1;
	}
	return MaxMultiple;
}

int euler9()
{
	int Product = 1;
	for (int a = 1; a < 999; a++)
	{
		for (int b = 1; b < 999; b++)
		{
			for (int c = 1; c < 999; c++)
			{
				Product = a * a + b * b;
				if (Product == c * c)
				{
					if (a + b + c == 1000)
					{
						return a * b * c;
					}
				}
			}

		}
	}
	return 0;
}


void euler10()
{
	long long sum = 0;

	for (int i = 2; i < 2000000; i++)
		if (IsPrime(i) == 1)
			sum += i;

	printf("10: %lli\n", sum);
}



int euler11()
{
	int grid[20][20] = {
		 8,2,22,97,38,15,0,40,00,75,4,5,7,78,52,12,50,77,91,8,
		 49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,00,
		 81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65,
		 52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91,
		 22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80,
		 24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50,
		 32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70,
		 67,26,20,68,02,62,12,20,95,63,94,39,63,8,40,91,66,49,94,21,
		 24,55,58,05,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72,
		 21,36,23,9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95,
		 78,17,53,28,22,75,31,67,15,94,03,80,04,62,16,14,9,53,56,92,
		 16,39,05,42,96,35,31,47,55,58,88,24,00,17,54,24,36,29,85,57,
		 86,56,00,48,35,71,89,07,05,44,44,37,44,60,21,58,51,54,17,58,
		 19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40,
		 04,52,8,83,97,35,99,16,07,97,57,32,16,26,26,79,33,27,98,66,
		 88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69,
		 04,42,16,73,38,25,39,11,24,94,72,18,8,46,29,32,40,62,76,36,
		 20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16,
		 20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54,
	};
	int mult = 0;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			int vert = 0, horz = 0, diagl = 0, diagr = 0;
			if (j < 17)
			{
				horz = grid[i][j] * grid[i][j + 1] * grid[i][j + 2] * grid[i][j + 3];
			}
			if (i < 17)
			{
				vert = grid[i][j] * grid[i + 1][j] * grid[i + 2][j] * grid[i + 3][j];
			}
			if (i < 17 && j < 17)
			{
				diagr = grid[i][j] * grid[i + 1][j + 1] * grid[i + 2][j + 2] * grid[i + 3][j + 3];
			}
			if (i > 3 && i < 17 && j > 3)
			{
				diagl = grid[i][j] * grid[i + 1][j - 1] * grid[i + 2][j - 2] * grid[i + 3][j - 3];
			}
			mult = max(mult, max(horz, max(vert, max(diagr, diagl))));
		}
	}

	return mult;

}
void Euler_12()
{
	unsigned int triungle = 0;
	int count = 1;
	int lim;

	for (int i = 1; count <= 500; i++)
	{
		count = 1;
		triungle += i;
		lim = sqrt(triungle);
		for (int j = 2; j <= lim; j++)
			if (triungle % j == 0)
				if (j == lim)
					count++;
				else
					count += 2;
	}

	printf("12: %d\n", triungle);
}

void euler13()
{
	FILE* F;
	F = fopen("text.txt", "r");
	if (!F)
		return;

	char num[51] = "";
	struct bn* x = MemConstruct("0");
	struct bn* y = NULL;

	for (int i = 0; i < 100; i++)
	{
		fscanf_s(F, "%s", num, 51);
		y = MemConstruct(num);
		x = Sumofbn(x, y);
	}

	printf("13: ");
	Printbn(x);
	printf("\n");
}

void euler14()
{
	long long n = 0;
	long long count = 0;
	long long max = 0;
	int N = 0;
	for (int i = 1000000; i > 1; --i)
	{
		n = i;
		count = 1;
		while (n > 1)
		{
			if (n % 2 == 0)
			{
				n /= 2;
				++count;
			}
			else
			{
				n = (n * 3) + 1;
				++count;
			}
		}
		if (count >= max)
		{
			max = count;
			N = i;
		}
	}
	printf("14: %d\n", N);
}

void euler15()
{
	long long int arr[21][21] = { 0 };
	for (int i = 0; i < 21; i++)
		for (int j = 0; j < 21; j++)
		{
			if (i == 0 && j == 0)
				arr[i][j] = 0;
			else
				if (i == 0 || j == 0)
					arr[i][j] = 1;
				else
					arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	printf("15: %lli\n", arr[20][20]);
}

void Task_3()
{
	FILE* f;
	fopen_s(&f, "date.txt", "r");

	if (!f)
	{
		printf("file didn`t open\n");
		return;
	}

	FILE* g;
	fopen_s(&g, "date_new.txt", "w");

	if (!g)
		return;

	int array[Date * 10];

	for (int i = 0; i < Date * 10; ++i)
	{
		array[i] = getc(f);
	}

	for (int i = 0; i < Date * 10; ++i)
	{
		printf("%d ", array[i]);
	}

	int arr[Date][10];

	for (int i = 0; i < Date; ++i)
	{
		for (int j = 0; j < 10; ++j)
			arr[i][j] = 400;
	}

	int m = 0;

	for (int i = 0; i < Date; ++i)
	{
		if (array[m] == 32)
			m++;

		for (int j = 0; j < 10; ++j)
		{
			if (array[m] == 48 || array[m] == 49 || array[m] == 50 || array[m] == 51 || array[m] == 52 || array[m] == 53 || array[m] == 54 || array[m] == 55 || array[m] == 56 || array[m] == 57)
			{
				arr[i][j] = array[m] - 48;
				m++;
			}
			else
			{
				if (array[m] == 47)
				{
					arr[i][j] = 20;
					m++;
				}
			}
		}
	}

	int day[Date];

	for (int i = 0; i < Date; ++i)
	{
		if (arr[i][1] != 400)
		{
			day[i] = (arr[i][6] * 1000 + arr[1][7] * 100 + arr[i][8] * 10 + arr[i][9]) * 10000 + (arr[i][3] * 10 + arr[i][4]) * 100 + arr[i][0] * 10 + arr[i][1];
		}
		else
		{
			for (int m = 0; m < 3; ++m)
				day[i] = -1;
		}
	}

	quickSort(day, 0, Date - 1);

	for (int i = Date; i > 0; --i)
	{
		if (day[i] > 1000)
		{
			fprintf(g, "%d", day[i] % 100);
			fpintf(g, "%c", '/');
			day[i] /= 100;
			fprintf(g, "%d", day[i] % 100);
			fpintf(g, "%c", '/');
			day[i] /= 100;
			fprintf(g, "%d", day[i]);
			fprintf(g, "%c", ' ');
		}
	}
}


int main() {

	euler1();
	euler2();
	euler3();
	euler4();
	euler5();
	euler6();
	euler7();
	euler8();
	euler9();
	euler10();
	euler11();
	euler12();
	euler13();
	euler14();
	euler15();
	Task_3();
	return 0 ;
}

