#include "main.h"
/**
 *rot13 - encodes strings using rot13.
 *@str: pointer to string.
 *
 *Return: pointer to encoded string.
 */
char *rot13(char *str)
{
int i = 0, j;
char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == letters[j])
{
str[i] = rot13[j];
break;
}
}
}
return (str);
}
