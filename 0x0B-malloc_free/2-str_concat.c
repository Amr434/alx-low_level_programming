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
unsigned int i, j;
unsigned int size;
char *newarr;

if (s1 == NULL && s2 == NULL)
return (NULL);

size = strlen(s1) + strlen(s2) + 1;
newarr = malloc(size *sizeof(char));

if (newarr == NULL)
return (NULL);

for (i = 0 ;  i < strlen(s1) ; i++)
{
newarr[i] = s1[i];
}
for (j = 0 ;  j < strlen(s2) ; j++)
{
newarr[i] = s2[j];
i++;
}

return (newarr);
}
