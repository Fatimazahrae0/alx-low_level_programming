#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the head of the list.
 * @n: Integer value to be stored in the new node.
 * Return: Pointer to the new node, or NULL if it fails.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode, *lstnd;

newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
}
else
{
lstnd = *head;
while (lstnd->next != NULL)
{
lstnd = lstnd->next;
}
lstnd->next = newnode;
}

return (newnode);
}
