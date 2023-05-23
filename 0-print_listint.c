#include "list.h"

size_t print_listint(const listint_t *h){
	size_t count = 0;

	if (h == NULL)
		printf("no Node");
	while(h!=NULL){
		printf("%d\n", h->n);
		h=h->next;
		count++;
	}

	return count;
}
	
	

