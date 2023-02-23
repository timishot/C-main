#include <stdio.h>



enum {
	SUCCESS, FAIL, MAX_LEN = 81
};

void LineReadWrite(FILE *fin, FILE *fout);

int main(void)
{
	FILE *fptr1, *fptr2;
	char filename1[] = "outhaiku.txt";
	char filename2[] = "haiku.txt";
	int reval = SUCCESS;

	fptr1 = fopen(filename1, "w");
	fptr2 = fopen(filename2, "r");

	if (fptr1 == NULL)
	{
		printf("Cannot open %s for Writing.\n", filename1);
		reval = FAIL;
	} else if (fptr2 == NULL)
	{
		printf("Cannot open %s for reading .\n", filename2);
		reval = FAIL;
	} else 
	{
		LineReadWrite(fptr2, fptr1);
		fclose (fptr1);
		fclose(fptr2);
	}

	return (reval);
}

void LineReadWrite(FILE *fin, FILE *fout)
{
	char buff[MAX_LEN];

	while (fgets(buff, MAX_LEN, fin) != NULL)
	{
		fputs(buff, fout);
		printf("%s", buff);
	}
}
