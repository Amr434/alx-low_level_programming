#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
/**
*malloc_checked -  function that allocates memory using malloc.
*@b: Number of byte we want.
*Return: pointer to reserved memory
*/
void *malloc_checked(unsigned int b)
{
void * x=malloc(b);
if (x == NULL)
{
exit(98);
}
else
{
return (malloc(b));
}
}
