#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * it executes, ommit some alphabet  and prints in a new line
 * Return: Always (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
			putchar(c);

	putchar('\n');

	return (0);
}
