#include "main.h"
#include <stdlib.h>

/**
 *
 *
 */
int *array_range(int min, int max)
{
	int *ptrs;
	int i, k;

	k = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}
	ptrs = malloc(k * sizeof(int));
	if (ptrs == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i <= k; i++)
	{
		ptrs[i] = min++;
	}
	return (ptrs);

}
