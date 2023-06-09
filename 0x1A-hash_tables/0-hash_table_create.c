#include "hash_tables.h"

/**
 * hash_table_create - create a hash table.
 * @size - The size of the array.
 *
 * Return: a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size){
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	table->size = size;

	table->array = calloc(table->size, sizeof(hash_node_t*));


	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);

}


