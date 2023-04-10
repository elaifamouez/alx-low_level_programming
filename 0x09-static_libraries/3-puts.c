#include "main.h"

/**
 * _puts - prints passed string to stdout.
 *
 * @s: String to print.
 */
void _puts(char *s)
{
int i = 0;
char c = s[0];

while (c != '\0')
{
_putchar(c);
i++;
c = s[i];
}
_putchar('\n');
}
