#include "main.h"
/**
 * puts_half - Prints an integer to stdout
 *
 * @str: The integer to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int n;

	i = 0;
	while (str[i])
		i++;
	i++;
	if (i % 2 == 1)
		n = (i - 1) / 2;
	else
		n = i / 2;
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
