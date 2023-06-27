#include "main.h"
/**
 * swap_int - the function that swaps the values of two integers
 * @a: integer one
 * @b: integer two
 * Return: void
 */
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
