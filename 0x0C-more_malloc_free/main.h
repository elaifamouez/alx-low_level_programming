#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
/**
 * _strl - returns the lgth of a string
 * @s: string to evaluate
 *
 * Return: the lgth of the string
 */
int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int _isdigit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}
/**
 * _puts - prints a string to stdout
 * @s: string to be printed
 *
 * Return: void
 */
void _puts(char *s)
{
while (*s)
 _putchar(*s++);
}
/**
 * _print_error - prints an error message and exits with status code 98
 *
 * Return: void
 */
void _print_error(void)
{
_puts("Error");
 _putchar('\n');
exit(98);
}
#endif/*MAIN_H*/
