#include <stdio.h>

/**
 * main -entry point
 * checking size of type of
 *
 * return: 0(success)
 */
void main(void)
{
	printf("Size of a char: %ld bytes(s)\n", sizeof(char));
	printf("Size of a int: %ld bytes(s)\n", sizeof(int));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(long long int));
	printf("size of a float: %ld bytes(s)\n", sizeof(float));
}
