#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: the size of each element
 *
 * Return: pointer to the allocated memory
 * or NULL If nmemb or size is 0, orIf malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size;

if (nmemb == 0 || size ==0)
return(NULL);

total_size = nmemb * size;

ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);


for (unsigned int i = 0; i < total_size; i++)
*((char *)ptr + i) = 0;

return (ptr);

}
