#include "main.h"
/**
*_strspn -  gets the length of a prefix substring.
* @accept:the substring
* @s:the string
* Return:s
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return (i);
}

