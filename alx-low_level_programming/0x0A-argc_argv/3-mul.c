#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count arguments
 * @argv: argument vector
 * return: (0)
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
		{
			a = atoi(argv[1]);
			b = atoi(argv[2]);
			printf("%d\n", a * b);
		}
	else
		printf("error");


	return (0);

}
