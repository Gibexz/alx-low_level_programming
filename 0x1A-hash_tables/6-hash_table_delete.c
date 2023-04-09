#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to the hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *mArray, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		mArray = ht->array[i];
		while (mArray)
		{
			temp = mArray->next;
			free(mArray->value);
			free(mArray->key);
			free(mArray);
			mArray = temp;
		}
	}
	free(ht->array);
	free(ht);
}
