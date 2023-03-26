#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

void del_pos(struct node **head, int position);
int main(){
	int position = 2;
	struct node *head = malloc(sizeof(struct node));
	head->data=45;
	head->link=NULL;

	struct node *ptr = malloc(sizeof(struct node));
	ptr->data=98;
	ptr-> link=NULL;

	struct node *ptr2 = malloc(sizeof(struct node));
	ptr2->data=3;
	ptr2->link=NULL;

	del_pos(&head,position);
	ptr = head;


	
	ptr = head;
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	return 0;
}

void del_pos(struct node **head, int position)
{
	struct node *current = *head;
	struct node *previous = *head;
	if(*head == NULL)
		printf("Liist is already empty!");
	else if(position == 1)
	{
		*head=current->link;
		free(current);
		current = NULL;
	}
	else
	{
		while(position != 1)
		{
			previous = current;
			current = current->link;
			position--;
		}
		previous->link = current->link;
		free(current);
		current = NULL;
	}
};

