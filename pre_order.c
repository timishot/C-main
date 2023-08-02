#include <stdio.h>
#include <stdlib.h>

void preorder(struct node *root)
{
	if (root == 0)
		return;
	printf("%d", root->data);
	preorder(root->left);
	preorder(root->right);
}


void main()
{
	struct node *root;
	printf("Pre-order is: ");
	preorder(root);
	  
