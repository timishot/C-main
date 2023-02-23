#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * main: entry point
 * @argc: argument count
 * @argv: argument vector
 * return - 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int count, sum;

	if (argc > 1)
	{
		if (argv = 0 > 9)
		{
			for (count = 1; count < argc; count++)
			{
				sum += atoi(argv[count]);
				printf("%d\n", sum);
			}
		}
		else if (argv = 'a' > 'z')
			printf("error\n");
	}

	else if (argc < 1)
		printf("0\n");

	return (0);
}


