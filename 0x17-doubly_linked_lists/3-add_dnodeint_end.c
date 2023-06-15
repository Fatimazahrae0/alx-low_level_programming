#include "lists.h"
/**
 * add_dnodeint_end - add a new node in the end of the list
 * @head: head of the list
 * @n:member of the new node
 * Return:return NULL if it fails
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->prev = NULL;
newnode->next = NULL;
if (*head == NULL)
{
(*head) = newnode;
}
else
{
dlistint_t *temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newnode;
newnode->prev = temp;
}
return (newnode);
}
