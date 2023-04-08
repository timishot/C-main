#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *del_list(struct node *head);

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

	head = del_list(head);
	if(head == NULL)
		printf("Linked List Deleted Successfully");

	return 0;
}

struct node *del_list(struct node *head)
{
	struct node *temp = head;

	while(temp!=NULL)
	{
		temp = temp->link;
		free(head);
		head = temp;
	}
	return head;

}


