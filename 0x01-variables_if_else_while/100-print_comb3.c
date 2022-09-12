#include <stdio.h>

/**
 * main - print all possible different combinations of two digits.
 * it executes and separate numbers by ,, followed by a space
 * Return: always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)

		if (j > i)

			putchar(i + '0');
	putchar(' ');
	putchar('\n');

	return (0);
}
