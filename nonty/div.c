#include "monty.h"

int line_number;

void div1()
{
	if (top == NULL || top->next == NULL){
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}else{
		if (top->next->n == 0){
			fprintf(stderr, "L%d: division by zero\n", line_number);
			exit(EXIT_FAILURE);
			return;
		}
	}


	int divisor = top->next->n;
	int dividend = top->n;
	pop(top);
	pop(top->next);


	int result = dividend/divisor;
	printf("this na me :%d\n", result);
	push(result);
}