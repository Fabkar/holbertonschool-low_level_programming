#include "lists.h"

/**
* delete_nodeint_at_index - delete a node at index.
* @head: Pointer to head of the linked list.
* @index:  is the index of the node.
* Return: integer.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aaux, *aux;
	unsigned int a;

	if (*head == NULL)
		return (-1);
	aux = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	for (a = 0; a < (index - 1); a++)
	{
		aux = aux->next;
		if (aux == NULL)
		{
			return (-1);
		}
	}
	aaux = aux->next;
	aux->next = aaux->next;
	free(aaux);
	return (1);
}
