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
<<<<<<< HEAD
continue;
=======
  continue;
>>>>>>> 7687270c750329fc8cf148d4a8f528b281506b99
_putchar('\n');
}
}
_putchar('\n');
}
