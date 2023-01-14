#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory
 * block using malloc and free
 * *ptr:  pointer to the memory previously allocated
 * new_size: is the new size, in bytes of the new memory block
 * old_size: is the size, in bytes, of the allocated space for ptr
 * 
 * Return: New pointer with newly allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	char *ptr2;
	char *nptr2;
	unsigned int o, n, i;

	o = old_size;
	n = new_size;

	if (n == o)
	{
		return (ptr);
	}
	if (n == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		o = 0;
	}

	ptr2 = ptr;
	nptr2 = (malloc(n));

	for (i = 0; i < o; i++)
	{
		nptr2[i] = ptr2[i];
	}
	nptr = nptr2;

	free(ptr);
	return (nptr);
}
