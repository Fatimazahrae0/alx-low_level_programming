#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{list_t *new_node, *temp;

if (head == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = _strlen(new_node->str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
return (new_node);
}
/**
 * _strlen - return the length of the string
 * @s: pointer to string
 *
 * Return: return the length of the string
 */
int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

return (len);
}
