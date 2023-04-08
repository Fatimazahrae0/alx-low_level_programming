#include "main.h"
/**
 * _isdigit - check if c is a digit
 * @c: the integer will be print it
 *
 * Return: void
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
