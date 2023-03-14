#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*str_concat - func concat to string
*@s1: array of char as input
*@s2: array of char as input
*Return: pointer to new array
*/
char *str_concat(char *s1, char *s2)
{
unsigned int i, j, count1, count2;
unsigned int size;
char *newarr;

if (s1 == NULL && s2 == NULL)
return NULL;

if (s1 != NULL)
{
for (count1 = 0 ; s1[count1] ; count1++);
}

if (s2 != NULL)
{
for (count2 = 0 ; s2[count2] ; count2++);
}


size = count1 + count2;


newarr = malloc(size *sizeof(char));

if (newarr == NULL)
return (NULL);


for (i = 0 ;  i < count1; i++)
{
newarr[i] = s1[i];
}
for (j = 0 ;  j < count2 ; j++)
{
newarr[i] = s2[j];
i++;
}

return (newarr);
}
