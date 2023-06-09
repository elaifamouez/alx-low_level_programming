#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
return (*s == '\0' ? 0 : (_strlen_recursion(s + 1) + 1));
}
/**
 * _is_palindrome - Helper function for is_palindrome.
 * @s: The string to be checked.
 * @b: The index of the first character to check.
 * @e: The index of the last character to check.
 *
 * Return: If the substring is a palindrome - 1.
 *         If the substring is not a palindrome - 0.
 */
int _is_palindrome(char *s, int b, int e)
{
return (b >= e ? 1 : s[b] != s[e] ? 0 : _is_palindrome(s, b + 1, e - 1));
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);

return (len <= 1 ? 1 : _is_palindrome(s, 0, len - 1));
}
