#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * it executes and prints in a new line
 * Return: Always (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
