#include <stdlib.h>
#include "dog.h"
/**
*new_dog - intialize object of dog_t.
*@name: dog name.
*@age: dog age.
*@owner: dog owner.
*Return: struct of dog_t.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *user;
user = malloc(sizeof(dog_t));
if (user == NULL)
return (NULL);
else
{
user->name = name;
user->age = age;
user->owner = owner;
}
return (user);
}
