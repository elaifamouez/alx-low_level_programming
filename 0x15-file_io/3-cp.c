#include "main.h"

/**
 * check97 - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void check97(int argc)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
}

/**
 * check100 - checks that file descriptors were closed properly
 * @fd: file descriptor
 *
 * Return: void
 */
void check100(int fd)
{
int c;

c = close(fd);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * error_file - checks if files can be opened.
 * @_file1: file_from.
 * @_file2: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int _file1, int _file2, char *argv[])
{
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
}
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
int _file1, _file2, _read;
char buffer[1024];

check97(argc);
_file1 = open(argv[1], O_RDONLY);
if (_file1 == -1)
error_file(-1, 0, argv);
_file2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
while ((_read = read(_file1, buffer, 1024)) > 0)
{
if (_file2 == -1 || (write(_file2, buffer, _read) != _read))
error_file(0, -1, argv);
}
if (_read == -1)
error_file(-1, 0, argv);
check100(_file1);
check100(_file2);
return (0);
}
