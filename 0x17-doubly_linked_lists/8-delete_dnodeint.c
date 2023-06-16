#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Double pointer to the head node of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
temp = *head;
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(temp);
return (1);
}

current = *head;
for (i = 0; i < index - 1 && current != NULL; i++)
current = current->next;


if (current == NULL || current->next == NULL)
return (-1);

temp = current->next;
current->next = temp->next;
if (temp->next != NULL)
temp->next->prev = current;
free(temp);
return (1);
}
