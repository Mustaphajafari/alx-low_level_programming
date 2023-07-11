#include "main.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to
 */
char *str_concat(char *s1, char *s2)

{
char *concat;
unsigned int l1 = 0, l2 = 0, i, j;


if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";


while (s1[l1] != '\0')
l1++;
while (s2[l2] != '\0')
l2++;


concat = malloc(sizeof(char) * (l1 + l2 + 1));
if (concat == NULL)
return (NULL);


for (i = 0; i < l1; i++)
concat[i] = s1[i];


for (j = 0; j < l2; j++)
concat[i++] = s2[j];


concat[i] = '\0';


return (concat);






}
