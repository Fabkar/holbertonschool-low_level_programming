#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list.
* @head: Pointer to head of the linked list.
* Return: head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n;
	
	aux = *head;	
	if (!(*head))
		return (0);
		
	n = (*head)->n;
	*head = (*head)->next;
	free(aux);	
	return (n);
}
