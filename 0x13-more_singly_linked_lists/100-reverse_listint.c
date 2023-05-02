#include "lists.h"
/**
 * reverse_listint - reverse a nodes of linked list
 * @head:the first element of the linked list
 * Return:return to the head
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prv = NULL;
listint_t *curr = *head;

while (curr != NULL)
{
listint_t *next = curr->next;

curr->next = prv;
prv = curr;
curr = next;
}
*head = prv;
return (*head);
}
