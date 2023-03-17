#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main() {
    char letter = 'a';

    /* loop through the alphabet from a to z*/
    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }

    putchar('\n');
    return 0;
}
