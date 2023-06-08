#include <stdio.h>
#define CAPACITY 50000 //Size of the hash table

unsigned long hash_function(char *str)
{
	unsigned long i = 0;

	for(int j = 0; str[j];  j++)
		i +=str[j];

	return i % CAPACITY;
}


int main(){

	char *string = "time";

	printf("%lu\n", hash_function(string));

}
