#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>



/**
 * new_dog - the new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
int name_length, owner_length;

new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
return (NULL);


name_length = strlen(name) + 1;
owner_length = strlen(owner) + 1;

name_copy = malloc(name_length *sizeof(char));
owner_copy = malloc(owner_length * sizeof(char));
if (name_copy == NULL || owner_copy == NULL)

{
free(new_dog);
free(name_copy);
free(owner_copy);
}
strcpy(name_copy, name);
strcpy(owner_copy, owner);

new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);

}
