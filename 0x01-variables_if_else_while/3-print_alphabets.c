#include <stdio.h>

/**
 * main - prints the alphabet lowercase and uppercase
 * it executes and prints in a new line
 * Return: Always (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
