#include<stdio.h>
#include "main.h"
/**
*_puts_recursion - print all charchter follwed by newline.
*@s: arr argument
*/

void _puts_recursion(char *s)
{
int i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
