#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table to look into
 * @key: the key
 *
 * Return: Returns the value associated with the element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *mainArray;

	if (ht == NULL || key == NULL || !(*key))
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	mainArray = ht->array[index];

	while (mainArray)
	{
		if (strcmp(key, mainArray->key) == 0)
			return (mainArray->value);
		mainArray = mainArray->next;
	}

	return (NULL);
}
