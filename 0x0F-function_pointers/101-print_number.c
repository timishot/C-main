#include <stdio.h>
#include <unistd.h>
#include "main.h"

void print_number(int n){
	if (n < 0){
		_putchar('-');
		n = -n;/*make positive*/
	}

	if (n >= 10){
		print_number(n/10); /*Recursively print the higher number*/
	}

	_putchar(n % 10 + '0'); /*Print the lowest digit as a character*/
}
