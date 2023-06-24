#include <stdlib.h>
#include <stdio.h>


struct node {
	struct node *prev;
	int data;
	struct node *next
};

int main(void){
	struct node *head = NULL;
	struct node *Ptr;
	head  = addToEmpty(head, 45);
	head = addAtBeg(head, 34);
	head = addAtEnd(head, 9);


	ptr = head;
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}

	return 0;
}

