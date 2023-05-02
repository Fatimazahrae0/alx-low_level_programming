#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to a pointer to the first node of the list
 * @index: index of the node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *dnode;
unsigned int i = 0, l;

if (*head == NULL)
return (-1);

l = 0;
tmp = *head;

while (!tmp)
{
tmp = tmp->next;
l++;
}
if (index > l + 1)
{
return (-1);
}

tmp = *head;

if (index == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}

while (i < index - 1)
{
tmp = tmp->next;
i++;
}

dnode = tmp->next;
tmp->next = (tmp->next)->next;
free(dnode);
return (1);
}
