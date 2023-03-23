#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 including 4 and 2
 *
 * @x ; the nymbers will be printed
 * Return: always success
 */
void print_most_numbers(void)
{
	char x;

	for (x = 48; x <= 57; x++)
	{
		if (x != 50 && x != 52)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
