#include "lists.h"
/**
 * sum_dlistint - return the sum of the DATA
 * @head: list
 * Return:return the sum of the data
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *curent = head;

while (curent != NULL)
{
if (curent == NULL)
return (0);
else
sum += curent->n;
curent = curent->next;
}
return (sum);
}
