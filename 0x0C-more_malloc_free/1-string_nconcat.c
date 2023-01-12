#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: Second string
 * @n: number of byte for concatenation
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strcat;
	unsigned int i, j, k, m, p, q = 0; /*for lenghts of strings and iterations*/

	i = strlen(s1);
	j = strlen(s2);
	k = i + n;
	strcat = malloc(i * sizeof(char));
	if (strcat == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < i; m++)
		strcat[m] = s1[m];
	strcat = realloc(strcat, n);
	if (strcat == NULL)
	{
		return (NULL);
	}
	for (p = i; p < k; p++)
	{
		while (q < n)
		{
			strcat[p] = s2[q];
			q++;
			p++;
		}
	}
	if (n < (j + 1))
	{
		strcat[k + 1] = '\0';
		return (strcat);
	}
	if (n >= (j + 1))
	{
		strcat[i + j + 1] = '\0';
		return (strcat);
	}
	return (0);
}
