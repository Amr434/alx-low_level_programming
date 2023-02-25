#include "main.h"
/**
* print_diagonal - prints a diagonal line using the \ character.
* @n: number of \ characters to be printed.
*/
void print_diagonal(int n)
{
if (n < 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < i ; j++)
{
_putchar(' ');
}
_putchar('\\');
if (i == n - 1)
  continue;
_putchar('\n');
}
}
_putchar('\n');
}
