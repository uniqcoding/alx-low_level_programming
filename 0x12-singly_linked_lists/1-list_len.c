#include "lists.h"

/**
 * list_len - finds number of elements in a lnked list
 * @h: pointer to the start of the linked list
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
const list_t *tmp;
unsigned int i;

tmp = h;
for (i = 0; tmp; i++)
	tmp = tmp->next;
return (i);
}
