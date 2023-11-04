#include <stdio.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;
//CIRCULAR QUEUE IMPLEMENTATION USING ARRAYS
 void enqueue(int x){
	if (front == -1 && rear == -1){
		front = rear = 0;
		queue[rear] = x;
	}else if(((rear+1)%N) == front){
		printf("Queue is full");
	}else{
		rear = (rear + 1)  % N;
		queue[rear] = x; 
	}
 }



 void dequeue(){
	if ( front == -1 && rear ==-1){
		printf("Underflow condition");
	}else if(front == rear){
		front=rear= -1;
	}else{
		printf("%d", queue[front]);
		front = (front + 1)%N;
	}
 }

 void display(){
	int i;
	if (front == -1 && rear== -1){
		printf("Queue is empty");
	}else{
		printf("Queue is: ");
		while(i != rear){
			printf("%d", queue[i]);
			i = (i+1) % N;
		}
		printf("%d", queue[rear]);
	}
 }

 void peek(){
	printf("%d", queue[front]);
 }

