#include "main.h"
#include <stdlib.h>

/**
 * word_count - Count the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in the string.
 */
static int word_count(char *str)
{
    int count = 0, in_word = 0;

    while (*str)
    {
        if (*str == ' ')
            in_word = 0;
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

/**
 * strtow - Split a string into words.
 * @str: The string to split.
 *
 * Return: An array of words, or NULL if memory allocation fails.
 */
char **strtow(char *str)
{
    char **words;
    int wc, i, j, in_word;
    char *start;

    if (str == NULL || *str == '\0')
        return (NULL);

    wc = word_count(str);
    words = malloc(sizeof(char *) * (wc + 1));
    if (words == NULL)
        return (NULL);

    in_word = 0;
    for (i = 0, start = str; *str; str++)
    {
        if (*str == ' ')
        {
            if (in_word)
            {
                words[i] = malloc(sizeof(char) * (str - start + 1));
                if (words[i] == NULL)
                    return (NULL);
                for (j = 0; j < (str - start); j++)
                    words[i][j] = start[j];
                words[i++][j] = '\0';
                in_word = 0;
            }
        }
        else if (!in_word)
        {
            start = str;
            in_word = 1;
        }
    }
    if (in_word)
    {
        words[i] = malloc(sizeof(char) * (str - start + 1));
        if (words[i] == NULL)
            return (NULL);
        for (j = 0; j < (str - start); j++)
            words[i][j] = start[j];
        words[i++][j] = '\0';
    }
    words[i] = NULL;

    return (words);
}
