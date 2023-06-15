#include "lists.h"
/**
 * add_dnodeint - add a new node
 * @head: head of the list
 * Return: return the newnode
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->prev = NULL;
newnode->next = *head;
if (*head != NULL)
{
(*head)->prev = newnode;
}
*head = newnode;
return (newnode);
}
