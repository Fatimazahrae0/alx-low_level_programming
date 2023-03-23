#include "main.h"
/**
 *print_numbers - print numbers fro 0 to 9
 *
 * Return : always success
 */
void print_numbers(void)
{
	char x;

	x = 48;

	while (x <= 57)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
