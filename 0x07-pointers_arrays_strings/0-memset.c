#include "main.h"
/**
* _memset - fills the memory with constant byte
* @s:the  memory area
* @n:bytes of the memory to be pointed
* @b:contant byte will be filled in the memory
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}

