#include <stdio.h>

/**
 * main - void starting point
 * writing a function that is use for writing and reading an array of integers
 */

int main(void)
{
	int nums[] = {1, 2, 3, 4, 5};
	int read_nums[5];
	FILE *fout = fopen("numbers.bin", "wb");
	FILE *fin = fopen("numbers.bin", "rb");

	if (fout == NULL || fin == NULL)
	{
		perror("Error opening files:\n");
		return 1;
	}

	fwrite(nums, sizeof(int), 5, fout);

	fread(read_nums, sizeof(int), 5, fin);

	fclose(fout);
	fclose(fin);

	printf("Original array: ");
	for (int i = 0; i<5; i++)
	{
		printf("%d ", nums[i]);
	}

	printf("\nRead array: ");
	for (int i=0; i<5; i++)
		printf("%d ", read_nums[i]);


	return (0);
}

