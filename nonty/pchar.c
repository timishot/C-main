#include  "monty.h"

void pchar(){
	if (top == NULL) {
        	fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
        	exit(EXIT_FAILURE);
    	}else if (top->n < 0 || top->n > 128){
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
        	exit(EXIT_FAILURE);
	}else{
		char character = (char)top->n;
		printf("%c\n", character);
	}


}