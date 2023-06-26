#ifndef DOUBLE_H_
#define DOUBLE_H_

#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node* prev;
	int data;
	struct node *next;
};

struct node* addAtBeg(struct node* head, int data);
struct node* addToEmpty(struct node* head, int data);
struct node* addAtEnd(struct node* head, int data);

#endif


