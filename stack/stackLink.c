#include <stdio.h>

struct node{
	int data;
	struct node *link;
};

struct node *top = NULL;

void push(int x){
	struct node *newnode;
	newnode = malloc(sizeof(struct node));
	newnode->data =x; 
	newnode->link = top;
	top = newnode;
}

void display(){
	struct node *temp;
	temp = top;

	if (top == NULL){
		printf("Underflow");
	}else{
		while (temp != 0)
		{
			printf("%d", temp->data);
			temp = temp->link;
		}	
	}
}

void peek(){
	if (top == 0){
		printf("underflow");
	}
	else{
		printf("top element is %d", top->data);
	}
}

void pop(){
	if (top == NULL){
		printf("underflow");
	}else{
		struct node *temp;
		temp = top;
		if (top == 0){
			printf("underflow");
		}else{
			printf("%d\n",top->data);
			top =top->link;
			free(temp);
		}
	}
}