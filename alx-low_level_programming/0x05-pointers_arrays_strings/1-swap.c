#include "main.h"

/**
 * swaping two values
 */
void swap_int(int *a, int *b)
{
	int *ptr1;
	int *ptr2;

	ptr1 = a;
	*ptr1 = 42;

	ptr2 = b;
	*ptr2 = 98;
}
