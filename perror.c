#include <stdio.h>
#include <errno.h>

int main (void)
{
	FILE *fp;

	//Try to open a file for reading
	fp = fopen("myfile.txt", "r");
	if (fp == NULL)
	{
		perror("Error opening file");
		return 1;
	}

	//Read a line from the file
	char line [100];
	if (fgets(line, 100, fp) == NULL)
	{
		perror("Error reading file");
		return 1;
	}


	//close the file 
	if (fclose(fp) != 0)
	{
		perror("ERror closing file");
		return 1;
	}

	return (0);
}


