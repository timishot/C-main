#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key in a hash table
 * @ht: the hash table to look into
 * @key: the key to serach for.
 *
 * Return: The value associated with the element, or NULL if the key count't found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return NULL;

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while(node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return node->value;
		node = node->next;
	}

	return NULL;
}
