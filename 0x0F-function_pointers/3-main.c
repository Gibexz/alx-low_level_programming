#include "3-calc.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: argument values
 *
 * Return: Result (integer value)
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 4) /* check the number of arguments passed */
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);/* covert string arguments to integers and */
	b = atoi(argv[3]);/* assign them to variables a and b */

	if (get_op_func(argv[2]) == NULL) /*validate operator */
	{
		printf("Error\n");
		exit(99);
	}

	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(a, b);

	printf("%d\n", result);
	return (0);
}
