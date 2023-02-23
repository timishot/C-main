#include <stdio.h>

int main(void)
{
	FILE *file = fopen("example.txt", "r");
	if (file == NULL)
		perror("unable to open file"); return (1);

	int ch;

	while ((ch = fgetc(file)) != EOF)
		putchar(ch);
	if (feof(file)) 
	{
		printf("\nEnd of file reached\n");
	}else 
	{
		printf("\nError while reading file\n");
	}

	fclose(file);

	return (0);
}
