#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 successfully
 */
int main(void)
{
	int e, o;

	for (e = 0; e < 100; e++)
	{
		for (o = 0; o < 100; o++)
		{
			if (e < o)
			{
				putchar((e / 10) + 48);
				putchar((e % 10) + 48);
				putchar(' ');
				putchar((o / 10) + 48);
				putchar((o % 10) + 48);
				if (e != 98 || o != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
