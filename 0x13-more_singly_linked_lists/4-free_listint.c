#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head:head of linked list
 * Return:return (head)
*/
void free_listint(listint_t *head)
{
listint_t *tmp;

while (head != NULL)
{
    
tmp = head;
head = head->next;
free(tmp);
}

}
