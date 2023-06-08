#include "hash.h"


Ht_item *create_item(char* key, char* value)
{
	//Creates a pointer to a new HashTable item
	Ht_item* item = malloc(sizeof(Ht_item));
	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);
	strcpy(item->key, key);
	strcpy(item->value, value);
	return item;
}


HashTable* create_table(int size)
{
	// Creates a new HashTable.
	HashTable* table = malloc(sizeof(HashTable));
	table->size = size;
	table->count = 0;
	table->items = calloc(table->size, sizeof(Ht_item*));

	for (int i = 0; i < table->size; i++)
		table->items[i] = NULL;

	return table;
}


void free_item(HashTable* table)
{
	// Free an item.
	free(item->key);
	free(item->value);
	free(item);
}

void free_table(HashTable* table)
{
	// Frees the table
	for (int  i = 0; i < table->size; i++)
	{
		Ht_item* item = table->items[i];

		if (item != NULL)
			free_item(item);
	}

	free(table->items);
	free(table);
}


void print_table(HashTable* table)
{
	printf("\nHash Table \n-----------------\n");

	for (int i = 0; i < table-.size; i++)
	{
		if (table -> items[i])
		{
			printf("Index: %d key: %s, value%s\n", i, table->items[i] -> key, table -> item[i] -> value);
		}
	}

	printf("------------------\n\n");
}

