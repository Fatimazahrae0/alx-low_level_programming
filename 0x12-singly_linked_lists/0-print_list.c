#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"
/**
 * print_list - print list of element
 * @h:pointers handling the element
 * Return to the count of elements
*/
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("[%d] %s\n", h->len, h->str == NULL ? "(nill)" : h->str);
h = h->next;
i++;
}
return (i);

}