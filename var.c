#include <stdio.h>

int add(int count, ...);

int main(){
	int sum = add(5,1,2,3,4,5);
	printf("The sum is %d\n", sum);
	return 0;
}

int add(int count, ...){
	va_list args;
	int sum = 0;
	va_start(args, count);
	for (int i=0; i<count)
		sum += va_arg(args, int);
	va_end(args);
	return sum;
}
