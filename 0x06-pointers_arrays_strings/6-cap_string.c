#include "main.h"

/**
 * cap_string - function to capitalize strings following a
 * seperator
 * @str: pointer to string
 *
 * Return: str
 *
 */
char *cap_string(char *str)
{
	int i = 0, j;
	int sep[] = {32, '\t', 11, '\n', 44, 59, 46, 33, 63, 34, 40, 41. 123, 125};

	if (str[0] > 96 && str[0] < 123)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			j = 0;
			while (j < 14)
			{
				if (str[i - 1] == sep[j])
				{
					str[i] -= 32;
					break;
				}
				j++;
			}
		}
		i++;
	}
	return (str);
}
