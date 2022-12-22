#include "main.h"

/**
 * leet - function to encode some alphas to nums
 * @str: pointer to the string
 *
 * Return: str
 *
 */
char *leet(char *str)
{
	int i;

	for (i = 47; str[i] < 123; i++)
	{
		if ((str[i] == 65) || (str[i] == 97))
		{
			str[i] = 52;
		}
		if ((str[i] == 69) || (str[i] == 101))
		{
			str[i] = 51;
		}
		if ((str[i] == 79) || (str[i] == 111))
		{
			str[i] = 48;
		}
		if ((str[i] == 84) || (str[i] == 116))
		{
			str[i] = 55;
		}
		if ((str[i] == 76) || (str[i] == 108))
		{
			str[i] = 49;
		}
	}
	return (str);
}
