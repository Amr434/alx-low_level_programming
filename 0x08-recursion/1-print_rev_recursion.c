#include<stdio.h>
#include "main.h"
/**
*_print_rev_recursion - print all charchter follwed by newline.
*@s: arr argument
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_puts_recursion(s + 1);
_putchar(*s);
}
