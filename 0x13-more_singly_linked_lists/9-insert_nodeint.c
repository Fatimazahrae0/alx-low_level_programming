#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the head of the linked list
 * @idx: index of the list where the new node should be added
 * @n: value to be stored in the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current_node;
unsigned int i = 0;
/*check if head pointer is NULL*/
if (!head)
return (NULL);
/*allocate memory*/
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
/*f the new node is inserted to the biginning tothe list*/
if (idx == 0)
{
    /*new node the head of the list*/
new_node->next = *head;
*head = new_node;
return (new_node);
}
/*while  the currentnode exist and i <idx-1*/
/*traverse the list until it reached the disired point*/
current_node = *head;
while (current_node && i < idx - 1)
{
current_node = current_node->next;
i++;
}
/*if the desired point reached to null free the newonode*/
if (!current_node)
{
free(new_node);
return (NULL);
}
/*insert the new node into the list at the desired point*/
else
{
new_node->next = current_node->next;
current_node->next = new_node;
}
return (new_node);
}
