#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 *
 * Return: address of the encoded string
 */

char *rot13(char *x)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = tranform_2(str[i]);
		i++;
	}
	return (str);
}

/**
 * transform_2 - function to map a letter with its rot13 encoding
 * @x: char to be encoded
 *
 * Return: the encoded character
 */

char transform_2(char x)
{
	char one[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	char replacement = x;

	while (i < 52)
	{
		if (x == one[i])
		{
			replacement = two[i];
			break;
		}
		i++;
	}
	return (replacement);
}
