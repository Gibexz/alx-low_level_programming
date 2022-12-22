#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @str: pointer to string to be encodded
 *
 * Return: str
 */
char *rot13(char *str)
{
	int i, j; /* for looping */
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (alphabet[j] == str[i])
			{
				str[i] = rot[j];
				break;				
			}
		}
	}
	return (str);
}
