#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodePtr;

//struct defn and typedef below are
//broken into two parts for charity of explaining 
//in our code we would usually combinne  the two

struct node
{
	int data;
	nodeptr next;
};

typedef struct node node;

int main(int argc, const char * argv[])
{
	nodePtr first = NULL;

	first = malloc(sizeof (node));
	first->next = NULL;

	//node firstNode;
	//firstNode.next;
	

	first->data = 234;
	//first->next = malloc (sizeof(node));
	//first->next->next = NULL;
	
	nodePtr temp = malloc(sizeof(node));

	temp->next = first; 




	printf("Hello, Nigeria!");
	return 0;
}
