#include <stdio.h>
#include "main.h"
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: 0 (on success)
 *
 */

int main(void)
{
	int pass, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 1997)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2124 - sum);

	return (0);
}
