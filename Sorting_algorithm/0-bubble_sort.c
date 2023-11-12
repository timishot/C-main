#include "sort.h"

/**
 * swap - use to swap
 * @xp: element to swap
 * @yp: element to swap
 */

void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - function that sorts an array of integers in ascending oider
 * @array: the element to sorted
 * @size: the size the array
 */


void bubble_sort(int *array, size_t size){
	size_t i, j =0;
	for (i=0; i<size-1; i++){
		for(j=0; j<size-i-1; j++){
			if (array[j] > array[j+1]){
				swap(&array[j], &array[j+1]);
			}
		}
	}
}
