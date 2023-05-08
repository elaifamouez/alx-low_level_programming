#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
register int _file, _write, len;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
_file = open(filename, O_WRONLY, O_APPEND);
_write = write(_file, text_content, len);
if (_file == -1 || _write == -1 )
return (-1);
close(_file);
return (1);
}
