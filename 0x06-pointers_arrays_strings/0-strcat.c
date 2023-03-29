#include "main.h"
/**
 * _strcat - concatenates two integers
 * @src:parameter 1st string
 * @dest:parameter 2nd string
 * Return: return pointer
 */
char *_strcat(char *dest, char *src)
{
char *rslt = dest;

while (*dest != '\0')
{
dest++;
}
for (; *src != '\0'; src++)
{
*dest = *src;
dest++;
}
return (rslt);
}
