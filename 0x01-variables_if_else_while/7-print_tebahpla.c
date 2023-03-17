#include <stdio.h>
/**
 * main - Alphabet in everse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char e;

	e = 'z';

		while (e >= 'a')
		{
			putchar(e);
			e--;
		}
		putchar('\n');
		return (0);
}

