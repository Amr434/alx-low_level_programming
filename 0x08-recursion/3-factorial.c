#include "main.h"
/**
*factorial -  get factorial of num
*@n: num we want get fac to it
*Return: return fact of n
*/
int factorial(int n)
{
if (n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}