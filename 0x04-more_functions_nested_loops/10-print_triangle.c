#include "main.h"
/**
*print_triangle - print # as rectanhle
*@size: rectangle side
*/
void print_triangle(int size)
{
if (size > 0)
{
int i, j, k;

for (i = 0 ; i < size ; i++)
{
for (j = size ; j > i + 1 ; j--)
{
_putchar(' ');
}
for (k = 0 ; k < j ; k++)
{
_putchar('#');
}
if (i != size - 1)
_putchar('\n');
}
}
_putchar('\n');
}
