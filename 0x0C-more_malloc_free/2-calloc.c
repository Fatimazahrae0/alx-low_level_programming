#include "main.h"
/**
 * _calloc - allocates a memory for an array
 * @size:size of array
 * @nmemb:element of an array
 * Return:return NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *str = 0;
unsigned int i;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
str = malloc(nmemb * size);

if (str == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
str[i] = 0;
}
return (str);
}