#include "main.h"
/**
 * puts2 - Prints an integer to stdout
 *
 * @str: The integer to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
int i;
i = 0;

while (str[i])
{
if (i % 2 == 0)

_putchar(str[i]);
i++;
}
_putchar('\n');

}


