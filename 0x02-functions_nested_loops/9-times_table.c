#include "main.h"
/**
 * times_table - how many times
 */
void times_table(void)
{
int row, column, result;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
result = row * column;
if (result < 10)
_putchar(' ');
else
_putchar('0' + (result / 10));
_putchar('0' + (result % 10));
if (column < 9)
{
_putchar(',');
_putchar(' ');
}
else
_putchar('\n');
}
}
}
