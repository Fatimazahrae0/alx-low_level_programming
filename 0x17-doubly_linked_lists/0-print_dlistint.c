#include "lists.h"
/**
 * print_dlistint - print element in the linked list
 * @h: head of the linked  list
 * return the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t count_n = 0;
while (h != NULL)
{
    printf("%d\n", h->n);
    h = h->next;
    count_n++;
}
return (count_n);
}
