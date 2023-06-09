#include "hash_tables.h"

/**
 * hash_djb2 - implementing of the djb2 algorithm
 * @str: sting used to generate hash value
 *
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;

	int c;

	hash = 5381;

	while((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}

	return hash;
}


