#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *del_first(struct node *head);
int main(){
	struct node *head = malloc(sizeof(struct node));
	head->data=45;
	head->link=NULL;

	struct node *ptr = malloc(sizeof(struct node));
	ptr->data=98;
	ptr-> link=NULL;

	struct node *ptr2 = malloc(sizeof(struct node));
	ptr2->data=3;
	ptr2->link=NULL;


	ptr->link=ptr2;

	head->link=ptr;

	head = del_first(head);
	ptr = head;
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	return 0;
}

struct node *del_first(struct node *head)
{
	if(head==NULL)
		printf("List is already empty!");
	else if(head->link ==NULL)
	{
		free(head);
		head = NULL;
	}
	else{
		struct node *temp = head;
		while(temp->link->link!=NULL)
			temp = temp->link;
		free(temp->link);
		temp->link = NULL;
	}

	return head;
};
