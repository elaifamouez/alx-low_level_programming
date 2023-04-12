#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
 * copy_word - copies a word from a string into a new array
 * @start: a pointer to the start of the word
 * @end: a pointer to the end of the word
 * Return: a new array containing the copied word
 */
char *copy_word(char *start, char *end)
{
int len = end - start, i;
char *word = malloc((len + 1) * sizeof(char));

if (!word)
return NULL;
for (i = 0; i < len; i++)
word[i] = start[i];
word[len] = '\0';
return (word);
}
/**
 * strtow - function that splits string into words
 * @str: string being passed
 * Return: null if string is empty or null or function fails
 */
char **strtow(char *str)
{
char **words;
int word_count;
int in_word = 0;
char *p = str;
int i = 0;
char *start = str;

if (str == NULL || *str == '\0')
return (NULL);
word_count = count_words(str);
words = malloc((word_count + 1) * sizeof(char *));
if (!words)
return (NULL);
while (*p != '\0')
{
if (*p == ' ')
{
if (in_word)
{
words[i] = copy_word(start, p);
if (!words[i])
return (NULL);
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
words[i] = copy_word(start, p);
if (!words[i])
return (NULL);
i++;
}
words[i] = NULL;
return (words);
}
