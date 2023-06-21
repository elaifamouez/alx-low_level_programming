/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked.
 *
 * Return:  1 if @c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int i = 0;

	if (c > '`' && c < '{')
		i = 1;

	return (i);
}
