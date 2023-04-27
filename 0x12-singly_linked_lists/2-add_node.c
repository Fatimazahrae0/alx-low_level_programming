#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head node
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;

if (head == NULL || str == NULL)
return (NULL);

newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);

newnode->str = strdup(str);
if (newnode->str == NULL)
{
free(newnode);
return (NULL);
}

newnode->len = _strlen(newnode->str);
newnode->next = *head;
*head = newnode;

return (newnode);
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