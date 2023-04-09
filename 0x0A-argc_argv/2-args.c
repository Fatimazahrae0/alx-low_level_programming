#include <stdio.h>
/**
 * main - program that prints all the argument into it
 * @argc:size of the argument
 * @argv:the value of argument
 * Return:return void
 */
int main(int argc, char *argv[])
{
while (argc--)
{
	printf("%s\n", *argv++);
}
	return (0);

}
