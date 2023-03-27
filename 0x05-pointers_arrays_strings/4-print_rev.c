#include "main.h"
/**
 * print_rev - Prints an integer to stdout
 *
 * @str: The integer to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
int i;

i = 0;

while (s[i])
{
i++;
}

while (i >= 0)
{

_putchar(s[i]);
i--;
}
_putchar('\n');
}

