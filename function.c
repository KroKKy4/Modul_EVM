#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "functions.h"

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#pragma warning(disable : 4996)


int IsPrime(long long number)
{
	if (number <= 1)
		return 0;

	int i = 0;
	int r = 0;
	int prime = 1;

	if (number != 2 && number % 2 == 0)
		prime = 0;
	else
		for (i = 3, r = sqrt(number); i <= r && prime; i += 2)
			if (number % i == 0)
				prime = 0;

	return prime;
}


void String()
{
	FILE* F;
	F = fopen("string.txt", "r");
	if (!F)
		return;

	char sym = '0';
	int count = 0;
	int save = 0;

	for (int i = 0; sym != EOF; i++)
	{
		sym = getc(F);

		if (sym == '(')
			count++;
		else if (sym == ')')
		{
			count--;
			if (count == -1)
				save = i;
		}
	}

	printf("String: ");
	if (count == 0)
		printf("0");
	if (count > 0)
		printf("-1");
	if (count < 0)
		printf("%d", save);

	printf("\n");
}
