#include <stdio.h>
#include "main.h"

/**
 * print_number - prints a number
 * @n: the number to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int num;
	
	num = n;
	if (n < 0)
	{
		putchar('-');
		num = -n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
