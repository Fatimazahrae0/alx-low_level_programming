#include "main.h"
/**
 * malloc_checked - allocate a memory using malloc
 * @b:unsigned int
 * Return:return to the pointer
*/
void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);

if (ptr == NULL)
exit(98);
return (ptr);
}

