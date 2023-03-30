#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: value of array
 * @n: number of element of the array
 * Return: return to the pointer
 */

void reverse_array(int *a, int n)
{
int i, j, swp;

i = 0;
j = n - 1;

while (i < n / 2)
{
swp = a[i];

a[i] = a[j];

a[j] = swp;

i++;

j--;
}
}

