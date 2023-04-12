#include <stdlib.h>

/**
 * strtow - function that splits string into words
 * @str: string being passed
 * Return: null if string is empty or null or function fails
 */
char **strtow(char *str)
{
char **words;
int word_count = 0;
int in_word = 0;
char *p = str;
int i, j;
char *start = str;

if (str == NULL || *str == '\0')
{
return NULL;
}
while (*p != '\0')
{
if (*p == ' ')
{
in_word = 0;
}
else if (!in_word)
{
word_count++;
in_word = 1;
}
p++;
}
words = (char **) malloc((word_count + 1) * sizeof(char *));
if (!words)
return (NULL);
i = 0;
in_word = 0;
p = str;
while (*p != '\0')
{
if (*p == ' ')
{
if (in_word)
{
words[i] = (char *) malloc((p - start + 1) * sizeof(char));
if (!words[i])
return (NULL);
for (j = 0; j < (p - start); j++)
{
words[i][j] = start[j];
}
words[i][j] = '\0';
i++;
in_word = 0;
}
}
else if (!in_word)
{
start = p;
in_word = 1;
}
p++;
}
if (in_word)
{
words[i] = (char *) malloc((p - start + 1) * sizeof(char));
if (!words[i])
return (NULL);
for (j = 0; j < (p - start); j++)
{
words[i][j] = start[j];
}
words[i][j] = '\0';
i++;
}
words[i] = NULL;
return (words);
}
