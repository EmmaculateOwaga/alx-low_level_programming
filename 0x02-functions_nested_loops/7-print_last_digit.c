#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @l: the number will use in question
 *
 * Return: value of the last digit
 */
int print_last_digit(int l)
{
	int last_digit = l % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
