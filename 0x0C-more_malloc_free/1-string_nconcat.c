#include <stdio.h>
#include <stdlib.h>
/**
*string_nconcat - string with n bytes from another.
*@s1: first array.
*@s2: second array.
*@n: num of bytes;
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, x, j, f;
char *newarr;
i = 0;
f = 0;
while (s1[i])
i++;

while (s2[f])
f++;

if (n >= f)
n = f;

newarr = malloc((i *sizeof(*s1)) + (sizeof(*s2) * n));

if (newarr == NULL)
{
return (NULL);
}

for (j = 0 ; s1[j] ; j++)
{
newarr[j] = s1[j];
}

for (x = 0 ; x < n ; x++)
{
newarr[j] = s2[x];
j++;
}


return (newarr);
}
