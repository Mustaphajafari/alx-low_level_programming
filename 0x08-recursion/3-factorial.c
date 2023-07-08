#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the number to camculete the factorial
 * Return: the factorial of the numebr or -1 to indicate an error
 */







int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
