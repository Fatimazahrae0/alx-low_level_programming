#include "lists.h"
/**
 * pop_listint - free the head
 * @head:pointer to pointer of the head the linked list
 * Return:return to the n
*/
int pop_listint(listint_t **head)
{
int n;
listint_t *tmp;

if (*head == NULL || head == NULL)
return (0);

n = (*head)->n;
tmp = *head;
*head = (*head)->next;
free(tmp);

return (n);
}
