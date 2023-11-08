#include "monty.h"

void pop(){
	if (top == NULL){
		fprintf(stderr, "L<line_number>: can't pop an empty stack,");
		exit(EXIT_FAILURE);
	}else{
		stack_t *temp;
		temp=top;
		top=top->next;
		free(temp);
	}
}