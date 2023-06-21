#include <unistd.h>
#include <stdio.h>

void _puts(char *str);
int _putchar(char c);
void myStartupFun(void) __attribute__ ((destructor));

int printf(__attribute__ ((unused)) const char *fmt, ...)
{
	return -1;
}

int puts(__attribute__ ((unused)) const char *str)
{
	return 0;
}

/**
 * _puts - prints passed string to stdout.
 *
 * @str: String to print.
 */
void _puts(char *str)
{
	int i = 0;
	char c = str[0];

	while (c != '\0')
	{
		_putchar(c);
		i++;
		c = str[i];
	}
	
	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * myStartupFun - Function to print win message
 */
void myStartupFun (void)
{
    _puts("9 8 10 24 75 - 9");
    _puts("Congratulations, you win the Jackpot!");
}
