#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: The key, string
 * @size: Size of the array of the hash table
 *
 * Return: keyIndex for insertion in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || !size)
		return (0);

	return (hash_djb2(key) % size);
}
