#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is palindrome
 * @head: double pointer to the head of the linked list
 *
 *
 * Return: 1 if the list is palindrome, 0 otherwise
 */

int is_palindrome(listint_t **head)
{
	listint_t *slow_ptr, *fast_ptr, *prev_slow_ptr = NULL, *mid_node = NULL;
	listint_t *second_half, *prev_of_slow_ptr = NULL;
	int res = 1;

	if (*head !=NULL && (*head)->next != NULL)
	{
		slow_ptr = *head;
		fast_ptr = *head;

		/*Get the midddle of the list. move sloe_list list by 1 and  fast_ptr by 2, slow_ptr woll have the middle node whenfast_ptr reaches the end*/
	while (fast_ptr != NULL && fast_ptr->next!=NULL)
	{
		fast_ptr = fast_ptr->next->next;
		prev_slow_ptr =slow_ptr;
		slow_ptr = slow_ptr->next;
	}


	/* if the number of nodes in the linked list is odd, we don't want to compare the middle nodewith itself*/
	if (fast_ptr != NULL)
	{
		mid_node = slow_ptr;
		slow_ptr = slow_ptr->next;
	}

	second_half = slow_ptr;
	prev_slow_ptr_>next =NULL; /*terminate first half*/

	while(second_half !=NULL)/*reverse second half*/
	{
		prev = second_half->next;
		second_half->next = slow;
		slow = second_half;
		second_half=prev;

	}

	second_half=slow;/*reset second half*/

	while(second_half!=NULL)
	{
		if(*head)->n != second_half->n)

