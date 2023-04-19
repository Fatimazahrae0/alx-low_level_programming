#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checking the code with main
 * @argc: the number of arguments
 * @argv: the value of the arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
int (*op_func)(int, int), a, b;

if (argc != 4)
{
printf("Error\n");
exit(89);
}

a = atoi(argv[1]);
b = atoi(argv[3]);

op_func = get_op_func(argv[2]);
if (op_func == NULL)
{
printf("Error\n");
exit(99);
}

if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
{
printf("Error\n");
exit(100);
}

printf("%d\n", op_func(a, b));
return (0);
}
