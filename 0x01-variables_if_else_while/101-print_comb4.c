#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0 successfully
 */
int main(void)
{
	int a, e, o;

	for (a = 48; a < 58; a++)
	{
		for (e = 49; e < 58; e++)
		{
			for (o = 50; o < 58; o++)
			{
				if (o > e && e > a)
				{
					putchar(a);
					putchar(e);
					putchar(o);
					if (a != 55 || e != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
