#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1:first string
 * @s2:second string
 * Return:return null
*/
char *str_concat(char *s1, char *s2)
{
	char *string;
	int i, j;
	int len1 = strlen(s1);
	int len2 = strlen(s2);


if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
string = malloc(len1 + len2 + 1);
if (string == NULL)
	return (NULL);
for (i = 0; i < len1; i++)
{
	string[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
	string[i + j] = s2[j];
}
string[i + j] = '\0';
return (string);
}

