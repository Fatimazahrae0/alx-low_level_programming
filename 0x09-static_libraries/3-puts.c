#include "main.h"
/**
 * _puts - Prints an integer to stdout
 *
 * @str: The integer to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
int i;
i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
