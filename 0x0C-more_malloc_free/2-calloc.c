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
<<<<<<< HEAD
if (nmemb == 0 || size == NULL)
=======
if (nmemb == 0 || size == 0)
>>>>>>> 875bf23d576f7ea217187ec2c20d8d65272c5f14
return (NULL);

arr = calloc(nmemb, size);
if (arr == NULL)
return (NULL);

return (arr);
}

