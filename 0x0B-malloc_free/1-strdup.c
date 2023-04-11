#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *string;
int i, y;

if (str == NULL)
	return (NULL);
i = 0;
while (str[i] != '\0')
	i++;
string = malloc(sizeof(char) * (i + 1));
if (string == NULL)
	return (NULL);
for (y = 0; str[y]; y++)

string[y] = str[y];
string[y] = '\0';
return (string);
}
