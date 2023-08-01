#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};


struct node *create()
{
	int x;
	struct node *new_node;
	new_node = malloc(sizeof(struct node));
	printf("Enter data (-1 for no node): ");
	scanf("%d", &x);
	if (x == -1)
		return 0;
	new_node->data = x;
	printf("Enter left child of %d ", x);
	new_node->left = create();
	printf("Enter right child of %d ", x);
	new_node->right = create();
	return new_node;
};

void main()
{
	struct node * root;
	root = NULL;
	root = create();
}


