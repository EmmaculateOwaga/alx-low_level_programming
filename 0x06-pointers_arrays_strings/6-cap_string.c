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
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] = a[a] - 32;
			i++;
		}
		a++;
	}
		return (y);
}
