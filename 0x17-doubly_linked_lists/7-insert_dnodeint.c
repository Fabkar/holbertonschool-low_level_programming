#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node in the given index.
 * @h: pointer to each node.
 * @idx: index given.
 * @n: the value given to new node.
 * Return: the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *n_node;

	tmp = *h;
	if (tmp == NULL || idx == 0)
		return (add_dnodeint(h, n));
	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);
	while (idx != 0)
	{
		tmp = tmp->next;
		idx--;
		if (tmp == NULL)
			return (NULL);
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));
	n_node->n = n;
	n_node->prev = tmp;
	n_node->next = tmp->next;
	tmp->next->prev = n_node;
	tmp->next = n_node;
	return (n_node);
}
