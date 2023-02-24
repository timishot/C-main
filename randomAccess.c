#include <stdio.h>

/**
 * main - starting point
 * creating a random access file
 * return (0)
 */

enum {
	SUCCESS, FAIL, MAX_LEN = 80
};

void PtrSeek(FILE *fptr);
long PtrTell(FILE *fptr);
void DataRead(FILE *fptr);
int ErrorMsg(char *str);

int main(void)
{
	FILE *fptr;
	char filename[] = "haiku.txt";
	int reval = SUCCESS;
	fptr = fopen(filename, "r");

	if (fptr == NULL)
		reval = ErrorMsg(filename);
	else
	{
		PtrSeek(fptr); 
		fclose(fptr);
	}


	return (reval);


}

void PtrSeek(FILE *fptr)
{
	long offset1, offset2, offset3;

	offset1 = PtrTell(fptr);
	DataRead(fptr);
	offset2 = PtrTell(fptr);
	DataRead(fptr);
	offset3 = PtrTell(fptr);
	DataRead(fptr);

	printf("\nRe-read the haiku: \n");
	/*re-read the third verse of the haiku*/
	fseek(fptr, offset3, SEEK_SET);
	DataRead(fptr);
	fseek(fptr, offset2, SEEK_SET);
	DataRead(fptr);
	fseek(fptr, offset1, SEEK_SET);
	DataRead(fptr);
}

long PtrTell(FILE *fptr)
{
	long reval;

	reval = ftell(fptr);
	printf("The fptr is at %ld\n", reval);

	return (reval);
}

void DataRead(FILE *fptr)
{
	char buff[MAX_LEN];
	fgets(buff,MAX_LEN, fptr);
	printf("---%s", buff);
}

int ErrorMsg(char *str)
{
	printf("cannot open %s.\n", str);
	return FAIL;
}

