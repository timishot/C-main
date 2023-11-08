#include "monty.h"

void add(){
	if (top==NULL){
		fprintf(stderr, "underflow");
		exit(EXIT_FAILURE);
	}else{

		stack_t *new_node;
		int sum = top->n + top->next->n;


		stack_t *temp = top;
		top = top->next->next;
		free(temp->next);
		free(temp);

		new_node = malloc(sizeof(stack_t));
		if (new_node == NULL){
			perror("Memory allocation");
		}

		new_node->n = sum;
		new_node->next = top;
		top = new_node;


		
	}
}