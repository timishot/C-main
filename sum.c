#include <stdio.h>
#include <stdarg.h>


double sum_of_squares(int count, ...){
	va_list args;
	double sum = 0;

	va_start(args, count);

	for(int i=0; i<count; i++){
		double x = va_args,double;
		sum += x*x;
	}

	va_end(args);

	return sum;
}



