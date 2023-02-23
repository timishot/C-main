#include <stdio.h>

/**
 * main - entry point
 * @argc: count of arguments
 * @argv: arguments vectors
 *
 * Return - 0 (success)
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	else
		printf("error no argument");

	return (0);
}
