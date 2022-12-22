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
	int i, j;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char A[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == a[j] || str[i] == A[j])
				str[i] = num[j];
			j++;
		}
		i++;
	}
	return (str);
}
