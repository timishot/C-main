#include<stdio.h>

/**
 * main - starting point
 * fwrite use to write an array of int value to a file
 * return (0)
 */

int main(void)
{
	int nums[] = {1, 2, 3,4,5};
	FILE *fout = fopen("numbers.bin", "wb"); 

	if (fout == NULL) 
	{
		printf("Error opening file!\n");
		return 1;
	}


	int num_elements = sizeof(nums)/ sizeof(nums[0]);
	fwrite(nums, sizeof(int), num_elements, fout);

	fclose(fout);

	return 0;
}
	 
