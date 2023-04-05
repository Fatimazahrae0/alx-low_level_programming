#include "main.h"
/**
* _print_rev_recursion - reversing a string
*@s:string will be reversed
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
