#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *leftChild;
	struct node *rightChild;
};

void insert(struct node **root, int data)
{
	struct node *tempNode = malloc(sizeof(struct node));
	struct node *current;
	struct node *parent;

	tempNode->data=data;
	tempNode->leftChild = NULL;
	tempNode->rightChild = NULL;

	if (*root == NULL)
		*root = tempNode;
	else{
		current = *root;
		parent = NULL;

		while (1){
			parent = current;

			//go to the left tree
			if (data < current->data){
				current = current->leftChild;
				if (current == NULL)
				{
					parent->leftChild = tempNode;
					return;
				}
			}
			else{
				current = current->rightChild;
				if (current == NULL)
				{
					parent->rightChild = tempNode;
					return;
				}
			}
		}
	}
}


void post_order_traversal(struct node *root)
{
	if (root != NULL){
		post_order_traversal(root->leftChild);
		post_order_traversal(root->rightChild);
		printf("%d ", root->data);
	}
}

int main(){
	int i;
	struct node *root = NULL;

	int array[7] = {27, 14, 35, 10, 19, 31, 42};
	for (i=0; i<7; i++)
		insert(&root, array[i]);
	printf("\nPost order traversal: ");
	post_order_traversal(root);
	return 0;
}
