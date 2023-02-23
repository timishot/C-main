#include <stdio.h>

int main(void)
{
	char UserInput[100];
	char FileName[100];

	printf("Input FIlename:  ");
	scanf("%s", FileName);
	FILE *fp = fopen(FileName, "w");

	printf("input txt into file:  ");
	fgets(UserInput, sizeof(UserInput), stdin);
	fputs(UserInput, fp);

	fclose(fp);

	return (0);

}
