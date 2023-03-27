#include "main.h"
/**
 * swap_int - Prints an integer to stdout
 *
 * @a: The integer to be printed
 * @b: the integer to be printed
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
