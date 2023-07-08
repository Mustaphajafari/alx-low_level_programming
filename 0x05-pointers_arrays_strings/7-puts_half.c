#include "main.h"
/**
 * puts_half - the  function that prints half of a string
 * @str: the input string
 * Return: void
 */
void puts_half(char *str)
{
int length = 0;
int i;

while (str[length] != '\0')
{
length++;
}

if (length % 2 == 1)
{
i = (length - 1) / 2;
i += 1;
}
else
{
i = length / 2;
}
for (; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
