#include "main.h"
#include <stdlib.h>

/**
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *call;
	char *set0;
	unsigned int i, k;

	k = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	call = malloc(nmemb * size);
	if (call == 0)
	{
		return (NULL);
	}

	set0 = call;

	for (i = 0; i < k; i++)
	{
		set0[i] = '\0';
	}
	return (call);

}
