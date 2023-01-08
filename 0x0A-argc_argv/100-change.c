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
	int num, i, change = 0;
	int coins[6] = {25, 10, 5, 2, 1}

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argc == 2)
	{
		num = atoi(argv[1]);

		if (num < 0)
		{
			printf("0\n");
			return (0);
		}

		else
		{
			for (i = 0; i < 5; i++)
			{
				while (num >= coin[i])
				{
					num -= coins[i];
					change++;
				}
			}
			printf("%d\n", change);
			return (0);
		}
	}
}
