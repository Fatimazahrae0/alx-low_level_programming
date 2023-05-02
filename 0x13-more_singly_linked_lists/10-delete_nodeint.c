#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to a pointer to the first node of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *a;
unsigned int i = 0;

if (*head == NULL)
return (-1);

tmp = *head;

if (index == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}

while (i < index - 1)
{
if (!tmp || !(tmp->next))
return (-1);

tmp = tmp->next;
i++;
}

a = tmp->next;
tmp->next = a->next;
free(a);

return (1);
}
