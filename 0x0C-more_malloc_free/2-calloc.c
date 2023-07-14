#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: the size of each element
 *
 * Return: pointer to the allocated memory
 * or NULL If nmemb or size is 0, orIf malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, j = 0;
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

j = nmemb * size;
ptr = malloc(j);


if (ptr == NULL)
return (NULL);


while (i < j)
{
ptr[i] = 0;
i++;
}

return (ptr);

}
