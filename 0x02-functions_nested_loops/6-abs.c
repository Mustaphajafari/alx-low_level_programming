#include "main.h"
int _abs(int c);
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
_abs(-1);
return (0);
}
int _abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (c);
}
