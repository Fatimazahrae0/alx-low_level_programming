#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1:first string
 * @s2:second string
 * @n:size of string
 * Return:return NULL if the function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *concas;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
 {
len1++;
}
while (s2[len2] != '\0')
{
len2++;    
}
if (n >= len2)
{
n = len2;
}
concas = malloc((len1 + n + 1) * sizeof(char));
if (concas == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
concas[i] = s1[i];
}
for (j = 0; j < n; i++, j++)
{
concas[i] = s2[j];
}
concas[i] = '\0';
return (concas);
}