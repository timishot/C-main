#include <stdio.h>
#include <stdlib.h>

struct node
{
	/* data */
	int data;
	struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int x){
	struct node *newnode;
	newnode = malloc(sizeof(struct node));
	newnode->data = x;
	newnode->next = NULL;

	if (front == NULL && rear == NULL){
		front = rear = newnode;
	}else{
		rear->next = newnode;
		rear= newnode;
	}
}


void display(){
	struct  node *temp;

	if (front== 0 && rear== 0){
		printf("queue is empty");
	}else{
		temp = front;
		while(temp != NULL){
			printf("%d", temp->data);
			temp =  temp->next;
		}
	}
}

void deque(){
	struct  node *temp;
	temp = front;
	if (front== 0 && rear== 0){
		printf("queue is empty");
	}else{
		front = front->next;
		free(temp);
	}
}

void peek(){
	if (front== 0 && rear== 0){
		printf("queue is empty");
	}else{
		printf("%d", front->data);
	}
}