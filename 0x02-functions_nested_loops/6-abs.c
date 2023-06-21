#include "main.h"
/**
 *_abs - computes the abselute value of integer
 *@c: the integer to compute the abselute value
 *Return: the absolute value of integer
 */
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
