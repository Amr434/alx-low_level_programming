#include <stdio.h>
#include <string.h>
/**
*_memcpy - is used to copy a block.
*@dest:  array of destination.
*@src:  array of source
*@n: number of byte.
*Return: array of byte
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{

memcpy(dest, src, n);
return (dest);
}
