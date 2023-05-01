#include "lists.h"
/**
 * print_listint - print nodes
 * @h:element of linked lists
 * Return:return to the node
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
