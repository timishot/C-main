#include "monty.h"


/**
 * swap - This function swap the first two element on the stack
 * return void
**/
void swap(){
	if (top == NULL){
		fprintf(stderr, "Undeflow");
	}else if(top->next == NULL){
		fprintf(stderr, "L<line_number>: can't swap, stack too short");
		exit(EXIT_FAILURE);
	}else{
		int temp_value = top->n;
        	top->n = top->next->n;
        	top->next->n = temp_value;		
	}
}