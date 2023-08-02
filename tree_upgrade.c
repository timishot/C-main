#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *leftChild;
	struct node *rightChild;
};


void insert(struct node **root, int data){
	struct node *tempNode = malloc(sizeof(struct node));
	struct node *current;
	struct node *parent;
	tempNode->data = data;
	tempNode->leftChild = NULL;
	tempNode->rightChild = NULL;

	/*if tree is empty*/
	if (*root == NULL)
		*root = tempNode;
	else{
		current = *root;
		parent = NULL;
		while(1){
			parent = current;

			//go to left of the tree
			if (data < parent->data){
				current = current->leftChild;

				//insert to the left
				if (current == NULL){
					parent->leftChild = tempNode;
					return;
				}
			}// go to right of the tree
			else{
				current = current->rightChild;

				//insert to the right
				if (current == NULL){
					parent->rightChild = tempNode;
					return;
				}
			}
		}
	}
}

void inorder_traversal(struct node* root){
	if (root != NULL){
		inorder_traversal(root->leftChild);
		printf("%d ", root->data);
		inorder_traversal(root->rightChild);
	}
}

int main()
{
	int i;
	struct node *root = NULL;
	int array[7] = {27, 14, 35, 10, 19, 31, 42};
	for (i = 0; i < 7; i++)
		insert(&root, array[i]);
	printf("\nInorder traversal: ");
	inorder_traversal(root);
	return 0;
}
