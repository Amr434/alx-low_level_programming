#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*print_rev - print reversed string followed by line
*@str: arr of charachter
*/
void print_rev(char *str)
{
int i;

for (i = (int)strlen(str) - 1 ; i >= 0 ; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
