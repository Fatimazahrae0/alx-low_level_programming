#include "main.h"
/**
 * _isalpha - Prints an integer to stdout
 *
 * @c: The integer to be printed
 *
 * Return: void
 */
int _isalpha(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
else if (c <= 90 && c >= 65)
{
	return (1);
}
else
{
return (0);
}
}
