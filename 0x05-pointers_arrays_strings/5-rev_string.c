#include "main.h"
/**
 * rev_string - Prints an integer to stdout
 *
 * @s: The integer to be printed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	int len;
	char c;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	len = i - 1;
	while (j < i / 2)
	{
		c = s[j];
		s[j] = s[len];
		s[len] = c;
		len--;
		j++;
	}
}
