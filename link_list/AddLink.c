#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

void add_at_end(struct node *head, int data);

int main(void)
{
	struct node *head = malloc(sizeof(struct node));
	head->data=45;
	head->link = NULL;

	struct node *current = malloc(sizeof(struct node));
	current->data =98;
	current->link = NULL;
	head->link = current;

	struct node *current2 = malloc(sizeof(struct node));
	current2->data=3;
	current2->link = NULL;
	
	head->link->link = current2;

	add_at_end(head, 67);





	return 0;
}

void add_at_end(struct node *head, int data)
{
	struct node *ptr, *temp;
	ptr = head;
	temp = malloc(sizeof(struct node));

	temp->data =data;
	temp->link =NULL;

	while (ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;

	while(ptr != NULL)
	{
		printf("%d \n", ptr->data);
		ptr= ptr->link;
	}
}


