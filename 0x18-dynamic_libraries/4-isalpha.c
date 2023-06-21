/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to be checked.
 *
 * Return:  1 if @c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	int i = 0;

	if ((c > '`' && c < '{') || (c > '@' && c < '['))
		i = 1;

	return  (i);
}
