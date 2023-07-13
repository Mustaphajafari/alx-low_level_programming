#include "main.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * malloc_checked - allocates memory
 * @b: size of the memory that we want to allocate
 *
 * Return: pointer to the allocated memory
 * or cause normal process termination with a status value of 98,
 * if malloc fails
 */



void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);



}
