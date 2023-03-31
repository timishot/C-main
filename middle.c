#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *link;
};

void insertAtMiddle(struct Node **head, int data)
{
	struct Node *new_node = malloc(sizeof(struct Node));
	new_node->data = data;
	new_node->link = NULL;

	if(*head ==NULL)
		*head = new_node;
	else
	{
		struct Node *slow = *head;
		struct Node *fast = (*head)->link;

		while(fast && fast->link)
		{
			slow = slow->link;
			fast = fast->link->link;
		}

		new_node->link = slow->link;
		slow->link = new_node;
	}
}

void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node=node->link;
	}
	printf("\n");
}

int main()
{
	struct Node *head = NULL;

	head = malloc(sizeof(struct Node));
	head->data = 1;
	head->link = NULL;

	struct Node *second = malloc(sizeof(struct Node));
	second->data = 2;
	second->link = NULL;
	head->link = second;

	struct Node *third = malloc(sizeof(struct Node));
	third->data = 3;
	third->link = NULL;
	second->link = third;

	struct Node *fouth = malloc(sizeof(struct Node));
	fouth->data = 4;
	fouth->link = NULL;
	third->link=fouth;


	struct Node *fifth = malloc(sizeof(struct Node));
	fifth->data = 5;
	fifth->link = NULL;
	fouth->link=fifth;

	//print the list before insertion
	printf("Before insertion: ");
	printList(head);

	//insert a node with data 99 in th middle of the list
	insertAtMiddle(&head, 99);
	
	//print the list after insertion
	printf("After insertion: ");
	printList(head);

	return 0;

}




