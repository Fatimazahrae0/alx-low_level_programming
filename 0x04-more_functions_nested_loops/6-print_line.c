#include "main.h"
/**
 * print_line - print lines n times
 * @n: number of the lines will be printed
 * Return: Always 0 success
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
