#include <stdio.h>

void insertion_sort(int array[], int size)
{
	int i, j, key;

	for (i = 1; i < size; i++){
		key = array[i];
		j = i - 1;

		/*Move elements of array[0..i-1] that are greater than key, to one position ahead*/
		while (j >= 0 && array[j] > key){
			array[j + 1] = array[j];
			j = j - 1;
		}

		/*Print the array after each iteration (optional)*/
		for (int k = 0; k < size; k++){
			printf("%d ", array[k]);
		}
		printf("\n");
	}
}

int main(void){
	int array[] = {3, 5, 8, 2, 3};
	int size = sizeof(array) / sizeof(array[0]);

	printf("original array ");
	for (int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");

	insertion_sort(array, size);
	
	printf("Sorted arraty: ");
	for (int i = 0; i < size;  i++){
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}
