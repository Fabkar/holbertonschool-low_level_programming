#include "lists.h"
/**
* print_listint - prints all the elements of a listint_t list.
* @h: head pointer.
* Return: Number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%i\n", (*h).n);
		c++;
		h = h->next;
	}
	return (c);
}
