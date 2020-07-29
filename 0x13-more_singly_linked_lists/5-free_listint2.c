#include "lists.h"
/**
* free_listint2 - free a listin_t list.
* @head: Pointer to head of the linked list.
* Return: Nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (!head)
		return;
	while (*head != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
	head = NULL;
}
