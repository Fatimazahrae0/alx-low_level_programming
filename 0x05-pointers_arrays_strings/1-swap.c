#include "main.h"
/**
 * swap - Prints an integer to stdout
 *
 * @a, @b: The integer to be printed
 *
 * Return: void
 */
void swap_int(int * a, int * b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
