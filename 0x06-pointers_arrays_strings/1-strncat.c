#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_strncat - cocat to string
*@dest: source arr
*@src: destination arr
*@n: number of charchter to be cat
*Return: func return array dest
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);

return (dest);
}
