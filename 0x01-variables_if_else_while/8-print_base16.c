#include <stdio.h>
/**
 * main - hexadicimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;

x = '0';

while (x <= '9')
{
putchar(x);
x++;
}
x = 'a';

while (x <= 'f')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
