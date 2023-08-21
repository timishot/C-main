#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers to search
 * @size: number of elements in the array
 * @cmp: pointer to the function used for comparison
 * Return: index of the first element for which cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result = -1;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
