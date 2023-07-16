#include "main.h"
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (check_palindrome(s, s + _strlen(s) - 1));

}
/**
 * check_palindrome - Recursive helper function
 *                   to check if a string is a palindrome.
 * @x: the start pointer of the string
 * @y: the end pointer of the string
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int check_palindrome(char *x, char *y)
{
if (x >= y)
return (1);


if (*x != *y)
return (0);


return (check_palindrome(x + 1, y - 1));
}


/**
 * strlen - calculates the length of the string.
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)

{
if (*s == '\0')
return (0);

return (1 + _strlen(s + 1));
}
