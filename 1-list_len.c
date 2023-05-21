#include "list.h"
/**sizet_list_len : to calculate the size of a node
 * const list_t *h@ take as an argument
 */

size_t list_len(const list_t *h){
	size_t count = 0;

	while(h != NULL){
		h=h->next;
		count++;
	}
	return (count);
}
