#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @y: string parameter
 * Return: string in capital
 */

char *cap_string(char *y)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', ',', '(', ')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (y[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || y[a - 1] == spc[i]) && (y[a] >= 97 && y[a] <= 122))
				y[a] = a[a] - 32;
			i++;
		}
		a++;
	}
		return (y);
}
