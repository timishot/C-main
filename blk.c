#include <stdio.h>
#include <string.h>

enum {
	SUCCESS, FAIL
};

void BlkWrite(FILE *fout, char *str);

int main(void)
{
	FILE *fptr;
	char filename[] = "test_21.txt";
	char str[]= "Disk file I/O is tricky.";
	int reval = SUCCESS;
	fptr = fopen(filename, "w");

	if (fptr == NULL)
	{
		printf("cannot open %s.\n", filename);
		reval = FAIL;
	}else
	{
		BlkWrite(fptr, str);
		fclose(fptr);
	}

	return (reval);
}

void BlkWrite(FILE *fout, char *str)
{
	int num;

	num = strlen(str);
	fwrite(str, sizeof(char), num, fout);
	printf("%s\n", str);
}
