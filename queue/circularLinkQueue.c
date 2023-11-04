#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


//CIRCULAR QUEUE IMPLEMENTATION USING LINK_LIST
struct node{
	int data;
	struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;


void enqueue(int x){
	struct node *newnode;
	newnode = malloc(sizeof(struct node));
	newnode->data = x;
	newnode->next=NULL;
 
	if (rear == NULL){
		front = rear = newnode;
		rear->next = front;
	}
	else{
		rear->next = newnode;
		rear = newnode;
		rear->next = front;
	}
}

void dequeue(){
	struct node *temp;
	temp = front;
	if (front == NULL && rear == NULL){
		printf("Underflow");
	} else if ( rear == front){
		front = rear = 0;
		free(temp);
	}else{
		front = front->next;
		rear->next=front;
		free(temp);
	}

}