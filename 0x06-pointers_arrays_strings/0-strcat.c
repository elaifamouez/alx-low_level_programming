#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char* _strcat(char* dest, char* src) {

char* ptr = dest + strlen(dest); 

while (*src != '\0') {
*ptr++ = *src++; 
}
*ptr = '\0';
return dest;
}
