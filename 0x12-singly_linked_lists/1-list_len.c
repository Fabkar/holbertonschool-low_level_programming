#include "lists.h"
/**
* list_len - show the number of element in a linked list.
* @h: head pointer.
* Return: Numbers of nodes.
*/
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
