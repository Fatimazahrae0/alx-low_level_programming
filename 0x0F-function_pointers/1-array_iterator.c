#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - execute a function
 * @size: the size of the array
 * @action:pointer to the function
 * @array:the array
 * RETURN: return void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

if (array == NULL || action == NULL)
{
return;
}
while (i < size)
{
action(array[i]);
i++;
}

}
