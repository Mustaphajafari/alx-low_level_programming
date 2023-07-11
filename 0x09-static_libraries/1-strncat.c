#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes
 * Return: resulting string
 */

char *_strncat(char *dest, char *src, int n)


{
char *ptr = dest;
while (*dest)
dest++;
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (ptr);
}
