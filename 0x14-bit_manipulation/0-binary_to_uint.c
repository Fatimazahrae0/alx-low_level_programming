#include "main.h"
/**
 * binary_to_uint - convert a binary
 * @b:binary number
 * Return:return the converted number
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int m = 0;

if (b == NULL)
return (0);

while (*b)
{
if (*b != '0' && *b != '1')
return (0);
else
m = m * 2 + (*b++ - '0');

}
return (m);

}
