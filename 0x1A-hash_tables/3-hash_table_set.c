#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table you want to add
 * @key: the key
 * @value: is the value associated with the key
 *
 * Return: if successful 1, else 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *mainArray, *newEl;

	if (ht == NULL || key == NULL || (*key) == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	mainArray = ht->array[index];

	while (mainArray)
	{
		if (strcmp(key, mainArray->key) == 0)
		{
			free(mainArray->value);
			mainArray->value = strdup(value);
			return (1);
		}
		mainArray = mainArray->next;
	}

	newEl = malloc(sizeof(hash_node_t));
	if(newEl == NULL)
		return (0);

	newEl->key = strdup(key);
	newEl->value = strdup(value);
	newEl->next = ht->array[index];
	ht->array[index] = newEl;
	
	return (1);
}
