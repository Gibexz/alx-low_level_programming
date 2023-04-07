#include "hash_tables.h"

/**
 * hash_table_create - function to creat a hadh table
 * @size: size of hash table arrat
 *
 * Return: pointer to created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));

	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < table->size; i++)
		table->array = NULL;

	return (table);
}
