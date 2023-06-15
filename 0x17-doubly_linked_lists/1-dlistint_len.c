#include "lists.h"
/**
 * dlistint_len - return the element in linked list
 * @h: linked list
 * Return:return the number of element in linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t count_e = 0;

while (h != NULL)
{
count_e++;
h = h->next;

}
return (count_e);
}
