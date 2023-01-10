#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count.
 * @av: pointer to array of size ac.
 * Return: NULL if ac == 0 || av == null, Pointer to new string,
 * or NULL on fail.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *args;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	args = malloc(size * sizeof(char) + 1);
	if (args == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			args[k] = av[i][j];
			j++;
			k++;
		}
		args[k] = '\n';
		k++;
		i++;
	}
	args[k] = '\0';
	return (args);
}
