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
	dlistint_t *tmp = *h, *n_node;
	int i = 0;

	if (tmp == NULL || idx == 0)
		return (add_dnodeint(h, n));
	if (tmp->next == NULL && idx == 1)
		return (add_dnodeint_end(h, n));
	if (tmp->next == NULL && idx > 1)
		return (NULL);
	while (idx != 0)
	{
		tmp = tmp->next;
		idx--;
		i = idx;
		if (tmp->next == NULL && (idx - 1) == 0)
			return (add_dnodeint_end(h, n));
		if (tmp->next == NULL && (i - 1) > 0)
			return (NULL);
	}
	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	tmp->prev->next = n_node;
	n_node->next = tmp;
	n_node->prev = tmp->prev;
	tmp->prev = n_node;
	return (n_node);
}
