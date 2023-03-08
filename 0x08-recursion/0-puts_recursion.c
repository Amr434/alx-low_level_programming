#include<stdio.h>
#include "main.h"
/**
*_puts_recursion - print all charchter follwed by newline.
*@s: arr argument
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
