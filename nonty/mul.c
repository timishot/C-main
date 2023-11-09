#include "monty.h"


void mul()
{
	if (top == NULL || top->next == NULL){
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}


	int num1 = top->next->n;
	int num2 = top->n;
	pop(top);
	pop(top->next);


	int result = num1 * num2;
	printf("this na me :%d\n", result);
	push(result);
}