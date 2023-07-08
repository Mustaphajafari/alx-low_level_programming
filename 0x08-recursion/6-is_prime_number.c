#include "main.h"

int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - check it the numeber is a prime number
 * @n: the number that we want to check
 *
 * Return: 1 if the number is prime and and 0 otherwise
 */
int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - recursive helper function to check primarility
 * @n: the number that we want to check
 * @divisor: the current divisor the we want to check
 * Return: 1 if the number is prime and 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
if (n < 2)
return (0);
if (divisor * divisor > n)
return (1);
if (n % divisor == 0)
return (0);
return (is_prime_helper(n, divisor + 1));
}
