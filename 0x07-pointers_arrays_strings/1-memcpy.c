#include "main.h"
/**
 * _memcpy - copies memory area
 * @n: number of bytes
 * @dest: the area that we want to copy to
 * @src: the area that we want to copy
 * Return: copied memory with n
 */




char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int r;
for (r = 0; r < n; r++)
{
dest[r] = src[r];

}






return (dest);
}
