#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory area
 * @src: memory area
 * @n: bytes from memory
 * Return: return to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
