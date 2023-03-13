#include <stdio.h>
#include  <stdlib.h>
/**
*create_array - allocat memory for array of size
*@size: the size of array
*@c: charachter we want append to array
*Return: array of charachter if size > 0 or NULL if size = 0
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;

if (size == 0)
{
return (NULL);
}
else
{
char *p = malloc(size * sizeof(char));
if (p == NULL)
{
return (NULL);
}
for (i = 0 ; i < size ; i++)
{
p[i] = c;
}
return (p);
}
}
