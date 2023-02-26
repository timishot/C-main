#include <stdio.h>

/**
 * main - staring point 
 * void: no argument
 * writing and reading a string 
 * return (0)
 */

int main(void)
{
	char *str = "Hello, world!";
	char read_str[20];

	FILE *fout = fopen("string.txt", "w");
	FILE *fin = fopen("string.txt", "r");

	if (fout == NULL || fin == NULL)
	{
		printf("Error opening file!\n");
		return 1;
	}

	fprintf(fout, "%s", str);

	fgets(read_str, 20, fin);

	fclose(fout);
	fclose(fin);

	printf("Original string: %s\n", str);
	printf("Read string: %s\n",read_str);

	return (0);

}
