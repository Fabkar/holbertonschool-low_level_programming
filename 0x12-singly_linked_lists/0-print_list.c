#include "lists.h"
/**
* print_list - Prints all elements of a list_t list.
* @h: head pointer.
* Return: Numbers of nodes.
*/
size_t print_list(const list_t *h)
{
    size_t c = 0;
    
    while (h != NULL)
    {
        if ((*h).str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", (*h).len, (*h).str);
        c++;
        h = h->next;
    }
    return (c);
}