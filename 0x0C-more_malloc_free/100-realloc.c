#include "main.h"
/**
*_realloc - realocate
*@ptr: pointer
*@old_size:old size of a pointer
*@new_size:new size of a pointer
*Return:return  null
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == 0)
{
free(ptr);
return NULL;
}
if (ptr == NULL)
{
return malloc(new_size);
}
if (new_size == old_size)
{
return ptr;
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return NULL;
}
ptr = malloc(new_size);
return new_ptr;
}
