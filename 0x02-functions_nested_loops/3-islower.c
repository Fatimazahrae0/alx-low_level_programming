#include "main.h"
/**
 * _islower - Prints an integer to stdout
 *
 * @c : The integer to be printed
 *
 * Return: void
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
