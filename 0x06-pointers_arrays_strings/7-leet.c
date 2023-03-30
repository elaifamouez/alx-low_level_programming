#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string.
 *
 * Return: the pointer to str.
 */
char *leet(char *str)
{
int i, j;
char lL[] = "aAeEoOtTlL";
char lN[] = "4433007711";

i = 0;
while (str[i] != '\0')
{
for (j = 0; j < 10; j++)
{
if (lL[j] == str[i])
{
str[i] = lN[j];
}
}
i++;
}
return (str);
}
