#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * sum_dlistint - sum all data (n) of a list.
 * @head: pointer to each node.
 * Return: the sum of data else is 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
