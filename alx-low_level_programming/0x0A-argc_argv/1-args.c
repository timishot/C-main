#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: argument count
 * @argv: argument vector
 * return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
