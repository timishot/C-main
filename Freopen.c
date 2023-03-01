#include <stdio.h>

int main(void)
{
	FILE *fp;
	fp = freopen("output.txt", "w", stdout);
	printf("hello, world!\n");
	fclose(fp);
	return (0);
}

