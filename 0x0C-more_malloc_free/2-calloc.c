#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_calloc - allocate memory of @size .
*@nmemb: size of type
*@size: num of element.
*Return: pointer to newarr;
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;
if (nmemb == 0 || size == NULL)
return (NULL);

arr = calloc(nmemb, size);
if (arr == NULL)
return (NULL);

return (arr);
}

