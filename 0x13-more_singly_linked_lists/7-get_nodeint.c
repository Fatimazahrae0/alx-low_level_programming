#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting at 0.
 * Return: Pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *currentnd = head;

for (i = 0; currentnd != NULL && i < index; i++)
currentnd = currentnd->next;

if (i < index || currentnd == NULL)
return (NULL);

return (currentnd);
}
