#include "main.h"
/**
 * print_sign - Prints an integer to stdout
 *
 * @n: The integer to be printed
 *
 * Return: void
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
_putchar('\n');
}
