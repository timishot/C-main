#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 * @key: the key hold the value
 * @size: the size of the table
 * Return: index
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value= hash_djb2(key);

	index = hash_value % size;


	return index;
}

