#include <stdio.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string that we want to sesrch in
 * @needle: the string that we want to search for
 * Return: success
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;

while (*one == *two && *two != '\0')
{
one++;
two++;
}
if (*two == '\0')
return (haystack);
}
return (NULL);
}
