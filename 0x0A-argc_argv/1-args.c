#include <stdio.h>
#include "main.h"

/**
 * main - entry point function
 * @argc: no. of argurments
 * @argv: arguments
 *
 * Return: printf
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
