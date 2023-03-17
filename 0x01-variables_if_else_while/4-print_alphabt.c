#include <stdio.h>
/**
 * main - write ;ower case alphabet  exeptes e & q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
