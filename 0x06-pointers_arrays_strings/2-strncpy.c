#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*_strncpy - func copy string
*@dest: destinion arr
*@src: source arr
*@n: number of charachter
*Return: funct return dest arr
*/
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
