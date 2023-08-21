#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: parameter
 * @src: parameter
 * @n: number of character
 * Return: return pointer
*/
char *_strncat(char *dest, char *src, int n)
{
char *rslt = dest;

while (*dest != '\0')
{
dest++;
}
while (*src != '\0' &&  n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

return (rslt);
}
