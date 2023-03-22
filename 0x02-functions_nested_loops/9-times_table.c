#include "main.h"

/**
 * time_table - Prints an integer to stdout
 *
 * @a @b @d: The integer to be printed
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, d;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			d = a * b;
			_putchar(44);
			_putchar(32);
			if (d <= 9)
			{
				_putchar(32);
				_putchar(d + 48);
			}
			else
			{
				_putchar((d / 10) + 48);
				_putchar((d % 10) + 48);
			}
		}
		_putchar('\n');
	}
}


