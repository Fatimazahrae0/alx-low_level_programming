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
newNode->n = n;
newNode->prev = NULL;
newNode->next = NULL;
if (*head == NULL)
{
(*head) = newNode;
}
else 
{
dlistint_t *temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newNode;
newNode->prev = temp;
}
return (newNode);
}
