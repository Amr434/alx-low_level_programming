#include <stdio.h>
#include "main.h"
/**
*is_recursion -  to reduce big problem to sub
*@g: we compare with it
*@n: is number we want to square it
*Return: return 1 if is square else -1
*/
int is_recursion(int g, int n)
{
if (g * g > n)
return (-1);

if (g * g == n)
return (g);

return (is_recursion(g + 1, n));
}
/**
*_sqrt_recursion - get square root
*@n: number we want get square
*Return: return  if is square 1 else return -1
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);

return (is_recursion(1, n));
}
