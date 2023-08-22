#include "3-calc.h"

int main (int argc, char *argv[])
{
	int (*func)(int, int);
	int a;
	int b;
	int result;
	if (argc > 4){
		printf("Error");
		exit(98);
	}


	if (argv[1] != NULL && argv[2] != NULL && argv[3] != NULL){
		func = get_op_func(argv[2]);// dereferencing
		if (!func){
			printf("Error\n");
			exit(98);
		}
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		result = func(a, b);
		printf("%d\n", result);
	}

	return (0);
}