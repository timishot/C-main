#include <stdio.h>

/**
 * main - starting point
 * description: using fscanf to read integers from a file
 */

int main(void)
{
	FILE *fp;
	int num1, num2;

	fp = fopen("input.txt", "r");
	if (fp = NULL)
	{
		perror("Error: could not open file.\n");
		return 1;
	}

	if (fscanf(fp, "%d %d", &num2, &num2) ==
