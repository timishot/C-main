#include <stdio.h>
#include <stdarg.h>

double average (int count, ...)
{
	va_list args;
	double sum = 0;

	va_start(args, count);

	for (int i =0; i < count; i++){
		sum += va_arg(args, double);
	}

	va_end(args);

	return sum/count;
}

int main()
{
	double avg1 = average(3, 2.0, 4.0, 6.0);
	double avg2 = average( 5, 1.0, 2.0,3.0,4.0,5.0);

	printf("The average of {2.0, 4.0, 6.0} is %.2f\n", avg1);
    	printf("The average of {1.0, 2.0, 3.0, 4.0, 5.0} is %.2f\n", avg2);

	return 0;
}

