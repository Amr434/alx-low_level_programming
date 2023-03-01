#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*print_array - function print slice of arr
*@a: array reinterpret_cast
*@n: slice we want
*/
void print_array(int *a, int n)
{

int i;

for (i = 0 ; i < n ; i++)
{
int  x = *(a + i);
printf("%d", x);
if (i == n - 1)
continue;

putchar(',');
putchar(' ');
}
putchar('\n');
}
