#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: "newstri" or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	unsigned int i, j, k;
	unsigned int l, n, m = 0;/*used for loop iterations*/

	i = strlen(s1);
	j = strlen(s2);
	k = i + j + 1;

	if (s1 == NULL)
	{
		*s1 = ' ';
	}
	if (s2 == NULL)
	{
		*s2 = ' ';
	}

	newstr = malloc(k * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}

	for (l = 0; l < i; l++)
	{
		newstr[l] = s1[l];
	}

	for (n = i; n < k; n++)
	{
		while (m < j)
		{
			newstr[n] = s2[m];
			m++;
			n++;
		}
	}
	newstr[k] = '\0';
	return (newstr);
}
