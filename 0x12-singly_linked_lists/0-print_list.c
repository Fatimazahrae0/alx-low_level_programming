#include "lists.h"
/**
 * print_list - print list of element
 * @h:pointers handling the element
 * Return:return to the count of elements
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nill)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}
