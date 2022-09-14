#include "main.h"
/**
 * jack_bauer - function print every hour and minutes
 * Return: 0 successfully
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <=23; hour++)
	{
	       for (minute = 0; minute <=59; minute++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours_remainder + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(mins_remainder + '0');
			_putchar('\n');
		}
	}
}
