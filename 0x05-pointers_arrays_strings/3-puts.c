#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_puts - print string followed by line
*@str: arr of charachter
*/
void _puts(char *str)
{
int i;

for (i = 0 ; i < (int)strlen(str) ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
