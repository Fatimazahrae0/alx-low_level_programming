#include "main.h"
/**
*_pow_recursion - recursing a power
*@x:value
*@y:power of x
*Return:return to the function
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}

