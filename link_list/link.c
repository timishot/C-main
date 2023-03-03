#include "24L02.h"

staatic NODE *head_ptr = NULL;

/**
 * main_interface()
 */
void main_interface(int ch)
{
	switch (ch)
	{
		case 'a':
			list_node_add();
			break;
		case 'd':
			if(!list_node_delete())
				list_node_print();
			break;
		case 'p':
			list_node_print();
			break;
		default:
			break;
	}
}

/**
 * list node _create()
 */
NODE *list_node_create(void)
{
	NODE *ptr=(NODE *)malloc(sizeof(NODE));

	if (ptr == NULL)
		ErrorExit("malloc() failed.\n");

	ptr->next_ptr = NULL; /*set the next pointer to NULL */
	ptr->id =0; /* intialization*/



