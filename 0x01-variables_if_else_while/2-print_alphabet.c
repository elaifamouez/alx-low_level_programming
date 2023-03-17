#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        /* Print each letter of the alphabet */
        putchar(letter);
    }

    /* Print a newline character at the end */
    putchar('\n');

    return (0);
}
