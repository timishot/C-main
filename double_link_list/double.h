#ifndef DOUBLE_H_
#define DOUBLE_H_

#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node* prev;
	int data;
	struct node *next;
};

struct node* add_beg(struct node* head, int d);

struct node* addToEmpty(struct node* head, int data);

#endif


