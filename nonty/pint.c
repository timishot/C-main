#include "monty.h"

/**
 *pint-Function for printing the first element in a stack
**/ 

void pint(){
	if (top == NULL){
		printf("Unflow condition");
	}else{
		printf("%d\n", top->n);
	}
}