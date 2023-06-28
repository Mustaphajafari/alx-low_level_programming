#include "main.h"
/**
 * puts_half - the  function that prints half of a string
 * @str: the input string
 * Return: void
 */
void puts_half(char *str)
{
int length = 0;
int i, start_index;

while (str[length] != '\0')
{
length++;
}

if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length - 1) / 2;
}
for (i = start_index; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
