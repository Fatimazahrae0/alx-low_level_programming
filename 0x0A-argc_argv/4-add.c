#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - checks if a string is composed only of digits
 *
 * @str: the string to check
 *
 * Return: 1 if the string is composed only of digits, 0 otherwise
 */
int is_digit(char *str)
{
while (*str != '\0')
{
if (*str < '0' || *str > '9')
{
return (0);
}
str++;
}
return (1);
}
/**
 * main - adds positive numbers passed as arguments to the program
 *
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
int total = 0;
int i;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
char *arg = argv[i];

if (!is_digit(arg))
{
printf("Error\n");
return (1);
}

total += atoi(arg);
}

printf("%d\n", total);
return (0);
}
