#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to the head of the list
 *
 * Return: The address o
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *p = head, *r = head;

while (p != NULL && r != NULL && r->next != NULL)
{
p = p->next;
r = r->next->next;

if (p == r)
{
p = head;

while (p != r)
{
p = p->next;
r = r->next;
}

return (p);
}
}

return (NULL);
}
