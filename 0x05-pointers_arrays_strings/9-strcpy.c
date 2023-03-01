#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*_strcpy - Copies the string pointed to by @src, including the
*          terminating null byte(\0) to the buffer pointed to by @dest.
*@dest: pointer to the buffer to copy the string to.
*@src: The string to copy
*
* Return: A pointer to the destination string @dest.
*/
char *_strcpy(char *dest, char *src)
{
int length, i;
length = strlen(src);

for (i = 0 ; i < length ; i++)
{
*(dest + i) = *(src + i);
}
dest[i + 1] = '\n';

return (dest);
}
