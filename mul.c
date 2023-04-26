#include <stdio.h>
#include <stdarg.h>

int multiply(int count,  ...)
{
	va_list args;
	int product = 1;

	va_start(args, count);

	for(int i=0; i< count; i++){
		product += va_arg(args, int);
	}

	va_end(args);

	return product;


}


int main(){
	int product1 = multiply(3, 2, 4, 6);
        int product2 = multiply(4, 1, 2, 3, 4);

        printf("The product of {2, 4, 6} is %d\n", product1);
        printf("The product of {1, 2, 3, 4} is %d\n", product2);

        return 0;
}

