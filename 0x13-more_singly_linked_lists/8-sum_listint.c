#include "lists.h"
/**
 * sum_listint - return the sum of the linked list
 * @head:head of the linked list
 * Return:return the sum of the data
*/
int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
