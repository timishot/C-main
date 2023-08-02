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

void preorder(struct node *root)
{
        if (root == 0)
                return;
        printf("%d\n", root->data);
        preorder(root->left);
        preorder(root->right);
}

void inorder(struct node *root)
{
	if (root == 0)
		return;
	inorder(root->left);
	printf("%d\n", root->data);
	inorder(root->right);
}

void postorder(struct node *root)
{
	if (root == 0)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d\n", root->data);
}



void main()
{
	struct node * root;
	root = NULL;
	root = create();
	printf("preorder tree\n");
	preorder(root);
	printf("inorder tree\n");
	inorder(root);
	printf("postorder tree\n");
	postorder(root);
}


