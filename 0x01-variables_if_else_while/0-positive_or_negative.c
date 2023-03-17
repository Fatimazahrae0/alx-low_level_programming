#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
{
/* if the condition is true then print the following */
printf("%d is positive\n", n);
}
else if (n == 0)
{
/* if the condition is true then print the following*/
printf("%d is zero\n", n);
}
else
{
/*if all the conditions are false then print the following*/
printf("%d is negative\n", n);
}
return (0);

}
