#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @size: the number of element in the array
 * @array:the array
 * @cmp:pointer to the function
 * Return:int_index
 *
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (cmp == NULL || array == NULL)
{
return (-1);
}

if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
