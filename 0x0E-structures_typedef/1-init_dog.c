#include "dog.h"
/**
*init_dog -  function intialize struct dog.
*@d: struct type .
*@name: dog name.
*@age: dog age.
*@owner: owner of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
