#include "main.h"
/**
 * int_strlen - Prints an integer to stdout
 *
 * @s: The integer to be printed
 *
 * Return: void
 */
int _strlen(char *s)
{
int length = 0;

while(*s != '\0')
{
length++;
s++;
}
return (length);
}
