#include "lists.h"
/**
 * list_len - return the number of element
 * @h:element
 * Return:return the number of element on the linked list
*/
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
