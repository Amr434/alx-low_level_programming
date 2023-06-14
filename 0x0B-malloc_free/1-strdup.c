#include <stdio.h>
#include  <stdlib.h>
#include  <string.h>
/**
*_strdup - copy array into another
*@str: array of char as input
*Return: copy array of charachter.
*/
char *_strdup(char *str)
{
unsigned int i, j;
char *coparr;

if (str ==  NULL)
{
return (NULL);
}
for (j = 0 ; str[j] ; j++)
;
j++;

coparr = malloc(j *sizeof(char));

if (coparr == NULL)
return (NULL);

for (i = 0 ; i < j ; i++)
{
coparr[i] = str[i];
}

return (coparr);
}
