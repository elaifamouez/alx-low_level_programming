#include "main.h"

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int _file1, _file2, err_close;
char buffer[1024];
ssize_t _read = 1024, _write;

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
_file1 = open(argv[1], O_RDONLY);
_file2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
if (_file1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (_file2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while (_read == 1024)
{
_read = read(_file1, buffer, 1024);
if (_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
_write = write(_file2, buffer, _read);
if (_write == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
err_close = close(_file1);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _file1);
exit(100);
}
err_close = close(_file2);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _file2);
exit(100);
}
return (0);
}
