#include <stdio.h>
#include "main.h"

/**
*print_sign-func check for number is enter
*@n:charchter checked
*
*Return: print_sign return 1 if id greater
*/
int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
