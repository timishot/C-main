#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

void print_data(struct node *head);

int main(void)
{
	struct node *head = NULL;
	head = malloc(sizeof(struct node));
	head->data = 45;
	head->link=NULL;

	struct node *current;
	current = malloc(sizeof(struct node));
	current->data=23;
	current->link =NULL;
	head->link = current;

	struct node *current2 = malloc(sizeof(struct node));
	current2 ->data= 34;
	current->link = NULL;
	current->link = current2;

	print_data(head);

	return (0);
}

void print_data(struct node *head)
{
	if (head ==NULL)
		printf("Linked list is empty");
	struct node *ptr = NULL;
	ptr = head;
	while(ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->link;
	}
}

	
	
