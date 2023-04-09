#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer that prints a hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, num_elm = 0, j = 0, size;
	hash_node_t *mainArray;

	if (ht == NULL)
		return;

	size = ht->size;

	printf("{");
	for (index = 0; index < size; index++)
	{
		mainArray = ht->array[index];
		while (mainArray)
		{
			num_elm += 1;
			mainArray = mainArray->next;
		}
	}

	for (index = 0; index < size; index++)
	{
		mainArray = ht->array[index];
		while (mainArray)
		{
			printf("'%s': '%s'", mainArray->key, mainArray->value);
			j += 1;
			if (j != num_elm)
				printf(", ");
			mainArray = mainArray->next;
		}
	}
	printf("}");
	printf("\n");
}
