#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * dlistint_len - show the numbers of elements in a list.
 * @h: pointer to each node.
 * Return: Number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
