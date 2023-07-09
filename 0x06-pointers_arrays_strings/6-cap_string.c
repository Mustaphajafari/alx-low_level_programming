#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @str: the string that we want to capitalize
 * Return: pointer to the resulting string
 */


char *cap_string(char *str)
{
int i;
if (str[0] >= 'a' && str[0] <= 'z')
str[0] = str[0] - 'a' + 'A';
for (i = 1; str[i] != '\0'; i++)
{
if (
str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}' ||
(str[i] >= 'a' && str[i] <= 'z')
)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 'a' + 'A';
}
}
return (str);
}
