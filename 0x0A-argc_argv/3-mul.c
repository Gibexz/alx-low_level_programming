#include <stdio.h>
#include <stdlib.h>
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
	int i, multy = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			multy *= atoi(argv[i]);
		}
		printf("%d\n", multy);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
