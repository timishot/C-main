#ifndef HASH_H
#define HASH_H

#include <stdio.h>
#include <unistd.h>

// Define the HAshTable item.


typedef struct Ht_item
{
	char* key;
	char* value;
}Ht_item;


// Define the HashTable
typedef struct HashTable
{
	//contains an array of pointers to items
	Ht_item** items;
	int size;
	int count;
}HashTable;

#endif


