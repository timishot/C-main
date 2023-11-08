#include "monty.h"


void pall(){
	stack_t * temp;
	temp = top;

	if (top == NULL){
		fprintf(stderr, "Underflow");
	}else{
		while (temp != NULL){
			printf("%d\n", temp->n);
			temp = temp->next;
		}
	}
}