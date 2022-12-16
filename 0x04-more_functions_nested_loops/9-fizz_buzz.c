#include <stdio.h>

/**
 * main - code to print a FizzBuzz numbering
 *
 *
 * Return: Always 0 ()
 */
int main(void)
{
	int i = 0;

	for (i = 1; i <= 99; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	for (i = 100; i < 101; i++)
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
	putchar('\n');
	return (0);
}
