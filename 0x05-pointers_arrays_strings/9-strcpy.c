#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Prints an integer to stdout
 *
 * @src : The integer to be printed
 * @dest :The integer to be printed
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

