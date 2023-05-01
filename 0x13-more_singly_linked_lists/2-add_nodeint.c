#include "lists.h"
/**
 * add_nodeint - add a new node in the head of linked list
 * @head:head of the linked list
 * @n:the value tobe inserted
 * Return: return to null if the element or the adrees doesnt exist
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;

newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->next = *head;
*head = newnode;

return (newnode);
}
