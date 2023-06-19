#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
		int n;
		int ld;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (ld > 5)
					{
						printf("last digit of %d is %d and is greater than 5\n", n, ld);
					}
					else if (ld == 0)
					{
						printf("last digit of %d is %d and is 0\n", n, ld);
					}
					else
					{
						printf("last digit of %d is %d and is less then 6 and not 0\n", n, ld);
					}
					return (0);
}
