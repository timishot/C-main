#include <stdio.h>
#include <stdarg.h>

/**
 * square
 * argument:
 * length- NUMBER OF element to be summed
 * ...- ellipe
 *
 */
int sq(int num)
{
	return (num * num);
}


int square(int length, ...)
{
	int sum_of_square=0;
	va_list args;
	va_start(args, length);
	
	for(int i =0; i < length; i++)
	{
		int sq2 = va_arg(args, int);
		sum_of_square += sq(sq2);
	}

	va_end(args);

	return sum_of_square;
}


int main()
{
	int sq3 =square(5, 1, 3, 4, 5, 6);

	printf("%d\n", sq3);

	return 0;
}

