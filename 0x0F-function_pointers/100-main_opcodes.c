#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 */
int main(int arg, char *argv[])
{
	if (if argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
}
