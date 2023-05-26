#include "list.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: double pointer to the head of list.
 *
 * return: the size of the list that was freed.
 */



size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;
	int *addresses[1024]; /*Array to store addresses of visted nodes*/
	int i;
	if (h == NULL || *h == NULL)
		return (0);
	current = *h;

	while (current != NULL){
		next = current->next;

		/*Check if current nodes address is already visted */
		for (i = 0; i<(int)size; i++)
		{
			if (addresses[i] ==(int *)current)
			{
				*h = NULL;/*Set head to indicate list is freed*/
				return (size);
			}
		}
		/*Store current node's address in the visted addresses array */

		addresses[size] = (int *)current;
		size++;

		free(current); /*Free the current node */
		current = next;
	}

	*h = NULL; /*Set head to NULL to indicate list is freed */
	return(size);
}

