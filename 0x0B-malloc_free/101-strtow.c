#include "main.h"
#include <stdlib.h>

/**
 * copy - copies chars to buffer
 * @dest: destination buffer
 * @start: starting char pointer
 * @stop: ending char pointer
 */
void copy(char *dest, char *start, char *stop)
{
while (start <= stop)
*dest++ = *start++;
*dest = 0;
}

/**
 * count_words - counts the number of words in a string
 * @str: the input string
 * Return: the number of words in the string
 */
int count_words(char *str)
{
int count = 0;
int in_word = 0;
char *p = str;

while (*p != '\0')
{
if (*p == ' ')
{
in_word = 0;
}
else if (!in_word)
{
count++;
in_word = 1;
}
p++;
}
return (count);
}

/**
 * strtow - splits sentence into words
 * @str: the sentence string
 *
 * Return: pointer to string array
 */
char **strtow(char *str)
{
int words = 0, in_word = 0;
char **ret, *word_start;

if (!str || !*str || !count_words(str))
return (NULL);
ret = malloc(sizeof(char *) * (count_words(str) + 1));
while (1)
{
if (*str == ' ' || !*str)
{
if (in_word)
{
ret[words] = malloc(sizeof(char) * (in_word + 1));
if (!ret[words])
{
return (NULL);
}
copy(ret[words], word_start, str - 1);
words++;
in_word = 0;
}
if (!*str)
break;
}
else
{
if (!in_word++)
word_start = str;
}
str++;
}
ret[words] = 0;
return (ret);
}
