#include "main.h"
#include <stdlib.h>
/**
 * create array - function that craeate an arrays of chars
 * @size:size of array
 * @c:array
 * Return:return null if size 0, return a pointer if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned i;

	char *n = malloc(size* sizeof(char));

	if (size == 0 || n == 0)
	{
	
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
n[i] = c;
	}
	return (n);
}
