#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an integer to stdout
 *
 * @n:The integer to be printed
 * @a:the integer to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n >= 0)
	{
		while (i < n)
		{
			if (i + 1 < n)
				printf("%d, ", a[i]);
			else
				printf("%d", a[i]);
			i++;
		}
	}
	printf("\n");
}
