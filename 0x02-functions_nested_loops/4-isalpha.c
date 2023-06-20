#include "main.h"
/**
 *_isalpha - Checks if a character is uppercase
 *@c: character to be checked
 *Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
