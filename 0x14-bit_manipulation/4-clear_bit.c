#include "main.h"
/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to the number
 * @index: index of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (index > 63)
return (-1);

mask = 1UL << index;
*n &= ~mask;

return (1);
}
