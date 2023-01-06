#include <stdio.h>
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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
