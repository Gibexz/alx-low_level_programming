#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of byte to allocated
 *
 * Return: Pointer to allocated memory or exit with 98 as status
 */
void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(b);
	if (mal == NULL)
	{
		free(mal);
		exit(98);
	}
	return (mal);
}
