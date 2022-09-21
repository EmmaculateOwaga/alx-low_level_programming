#include "main.h"

/**
 * leet - encodes a string into 1337
 * @y: parameter y
 * Return: string
 */

char *leet(char *y)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (y[a])
	{
		b = 0;

		while (b < l)
		{
			if (y[a] == tr[b] || y[a] - 32 == tr[b])
				y[a] = trw[b];
			b++;
		}
		a++;
	}
	return (y);
}
