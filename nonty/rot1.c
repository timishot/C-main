#include "monty.h"

void rot1(){
	if (top != NULL && top->next != NULL){
		stack_t *temp = top->next;
		stack_t *current = top;
		stack_t *prev = top ;
		while (current->next!=NULL){
			current = current->next;
		}

		current->next = prev;
		top = temp;
		prev->next = NULL;
		

	}
}