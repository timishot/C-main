#include <stdio.h>

enum {SUCCESS, FAIL, MAX_LEN = 80};

void BlockReadWrite(FILE *fin, FILE *fout);

int ErrorMsg(char *str);

int main(void)
{
	FILE *fptr1, *fptr2;
	char filename1[] = "outhaiku.txt";
	char filename2[] = "haiku.txt";
	int reval = SUCCESS;

	fptr1 = fopen(filename1, "w");
	fptr2 = fopen(filename2, "r");

	if (fptr1 == NULL)
		reval = ErrorMsg(filename1);
	else if (fptr2 == NULL)
		reval = ErrorMsg(filename2);
	else
	{
		BlockReadWrite(fptr2, fptr1);
		fclose(fptr1);
		fclose(fptr2);
	}

	return (reval);
}

void BlockReadWrite(FILE *fin, FILE *fout)
{
	size_t num;
	char buff[MAX_LEN + 1];

	while (!feof(fin))
	{
		num = fread(buff, sizeof(char), MAX_LEN, fin);
		buff[num * sizeof(char)] = '\0';
		printf("%s", buff);
		fwrite(buff, sizeof(char), num, fout);
	}
}

int ErrorMsg(char *str)
{
	printf("Cannot open %s.\n", str);
	return (FAIL);
}
