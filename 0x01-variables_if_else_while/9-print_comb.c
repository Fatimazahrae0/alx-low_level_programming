#include <stdio.h>
/**
 * main - numbers with colones
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int s;
s = 0;
	while (s <= 9)
	{
		putchar(s + 48);
	if (s != 9)
	{
		putchar(',');
		putchar(' ');
	}
		s++;
	}
putchar('\n');
return (0);
}

