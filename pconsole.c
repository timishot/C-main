#include <stdio.h>

int main(void) 
{
	FILE *fp;
	int count = 0;
	char ch;


	fp = fopen("haiku.txt", "r");

	if (fp ==NULL) 
	{
		printf("Error opening file.\n");
		return 1;
	}

	while ((ch = fgetc(fp)) != EOF)
	{
		putchar(ch);
		count++;
	}

	fclose(fp);

	printf("\n\n Total characters in file %d\n", count);

	return (0);

}
