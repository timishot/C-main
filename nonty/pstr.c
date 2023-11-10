#include "monty.h"

void pstr(){
	stack_t *temp;
	temp = top;
	while (temp!=NULL && temp->n != 0 && temp->n >= 0 && temp->n <= 127)
	{
		printf("%c", (char)temp->n);
		temp = temp->next;
	}
	printf("\n");
}