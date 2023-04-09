#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *reverse(struct node *head);
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

	head = reverse(head);
	ptr = head;
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr=ptr->link;
	}
	return 0;
}


struct node *reverse(struct node *head)
{
	struct node *prev = NULL;
	struct node *next = NULL;

	while(head != NULL)
	{
		next = head->link;
		head->link = prev;
		prev = head;
		head = next;
	}
	head = prev;
	return head;
};
