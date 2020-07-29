#include "lists.h"
/**
* free_listint - free a linked list.
* @head: Pointer to head of the linked list.
* Return: Nothing.
*/
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = (*head).next;
	}
}
