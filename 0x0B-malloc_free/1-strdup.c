#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	unsigned int j, i = 0;
	char *copystr;

	j = strlen(str);/* lenght of the string "str" to be copied*/

	if (str == NULL)
	{
		return (NULL);
	}

	copystr = malloc((j + 1) * sizeof(char));
	if (copystr == NULL)
	{
		return (NULL);
	}

	while (i < j)
	{
		copystr[i] = str[i];
		i++;
	}
	copystr[j] = '\0';
	return (copystr);
}
