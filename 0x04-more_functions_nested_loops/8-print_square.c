#include "main.h"
/**
*print_square - print squqre of size n times
*@size: size of square
*/
void print_square(int size)
{

int i, j;

for (i = 0 ; i < size ; i++)
{

for (j = 0 ; j < size ; j++)
{
_putchar('#');
}
if (i == size - 1)
{
_putchar('\n');
continue;
}
_putchar('\n');
_putchar('\n');
}
_putchar('\n');

}
