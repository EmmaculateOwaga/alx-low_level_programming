#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * it executes and prints in a new line
 * Return: Always (Success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');

	return (0);

}
