#include "main.h"
#include <string.h>

/**
 * rev_string - funtion to reverse a string
 * @s: string
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int i, length;
	char c;

	while (*(s + len) != '\0')
	{
		len++;
	}
	length = len;
	len--;
	for (i = 0; i < length / 2; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = c;
		len--;
	}
}
