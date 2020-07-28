#include "lists.h"
/**
* listint_len - print number of elements in a linked listint_t list.
* @h: head pointer.
* Return: returns the number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
