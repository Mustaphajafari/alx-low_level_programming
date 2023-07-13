#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: pointer to the newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;


if (n >= len2)
n = len2;

str = malloc(sizeof(char) * (len1 + n + 1));

if (str == NULL)
return (NULL);


for (i = 0; i < len1; i++)
str[i] = s1[i];


for (j = 0; j < n; j++)
str[i++] = s2[j];


str[i] = '\0';


return (str);
}
