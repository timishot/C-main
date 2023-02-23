#include <stdio.h>

int main(void)
{
	char message[] = "HEllo, world!";
	int i;
	FILE *fp;

	//open the file for writing
	fp = fopen("output.txt", "w");
	if (fp == NULL)
	{
		perror("ERROR OPENING FILE");
		return 1;
	}

	//writing the message to the file, one charater at a time
	for (i = 0; message[i] != '\0'; i++)
	{
		int result = fputc(message[i], fp);
		if (result = EOF)
		{
			perror("ERROR WRITING TO FILE");
			return 1;
		}
	}

	fclose(fp);

	return (0);

}
