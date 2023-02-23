#include <stdio.h>

int main(void)
{
	char str[100];
	char filename[100];
	FILE *fp;

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	printf("Enter a filename: ");
	scanf("%s", filename);
	fp = fopen(filename, "w");
	if (fp == NULL)
	{
		printf("Error: Could not open the file %s\n", filename);
		return (1);
	}
	fprintf(fp, "%s", str);
	fclose(fp);

	printf("String written to file %s\n", filename);

	return (0);
}
