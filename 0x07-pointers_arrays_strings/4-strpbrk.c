#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int m, n;

	for (m = 0; s[m]; m++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[m] == accept[n])
				break;
		}
		if (accept[n])
			return (s + m);
	}
	return (0);
}
