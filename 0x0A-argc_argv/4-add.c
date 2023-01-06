#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - entry point function
 * @argc: no. of argurments
 * @argv: arguments
 *
 * Return: printf
 */
int main(int argc, char *argv[])
{
	/**char alpha1[] = "abcdefghijklmnopqrstuvwxz-+=*&^%$#@!";**/
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			
			/*if (*argv[i] < 48 || *argv[i] > 57)*/
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
