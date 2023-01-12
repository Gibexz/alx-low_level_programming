#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	int *mal;
	mal = malloc(b);
	if (mal == NULL)
	{
		free(mal);
		exit(98);
	}
	return (mal);
}
