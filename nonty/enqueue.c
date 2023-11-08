#include "monty.h"


stack_t *top = NULL;

void push(int x){
	stack_t *newNode;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL){
		return;
	}
	newNode->n =x;
	newNode->prev= NULL;
	newNode->next = top;
	top = newNode;
}
