#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
register int _open;
ssize_t _read, _write;
register char *buffer = malloc(sizeof(char)  * letters);

if (!filename)
return (0);
_open = open(filename, O_RDONLY);
if (_open == -1)
return (0);
if (!(buffer))
{
free(buffer);
return (0);
}
_read = read(_open, buffer, letters);
_write = write(STDOUT_FILENO, buffer, _read);
if (_write == -1 || !(_write == _read))
{
free(buffer);
return (0);
}
free(buffer);
close(_open);
return (_write);
}
