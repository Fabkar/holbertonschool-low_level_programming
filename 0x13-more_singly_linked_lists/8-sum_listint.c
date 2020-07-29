#include "lists.h"
/**
* sum_listint - sum of all data(n) of a listint_t linked list.
* @head: Pointer to head of the linked list.
* Return: result of sum.
*/
int sum_listint(listint_t *head)
{
	int a = 0;

	if (!head)
		return (0);
	while (head)
	{
		a += head->n;
		head = head->next;
	}
	return (a);
}
