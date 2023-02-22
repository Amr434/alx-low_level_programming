#include "main.h"
/**
*print_last_digit-function print last digit
*@n: is argument checked
*
*Return: function return last digit of number after check abs
*/
int print_last_digit(int n)
{

if (n < 0)
{

n = n * -1;
}

n = n % 10;

_putchar(n + '0');

return (n);
}
