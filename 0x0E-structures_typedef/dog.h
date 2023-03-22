#ifndef GRANDPARENT_H
#define GRANDPARENT_H
/**
* struct dog - has specific attribute.
*@name: dog name
*@age: dog age.
*@owner: owner of dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* GRANDPARENT_H */