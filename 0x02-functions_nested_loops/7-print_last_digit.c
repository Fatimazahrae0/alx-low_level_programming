#include "main.h"

/**
 * print_last_digit - Prints an integer to stdout
 *
 * @y: The integer to be printed
 *
 * Return: void
 */
int print_last_digit(int y)
	{
	int l;

	l = y % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}

