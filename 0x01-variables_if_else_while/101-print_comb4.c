#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{

int x, i, y;
for (x = 0 ; x < 10 ; x++)
{
for (y = x + 1 ; y < 10 ; y++)
{
for (i = y + 1 ; i < 10 ; i++)
{

putchar('0' + x);
putchar('0' + y);
putchar('0' + i);

if (x == 7 && y == 8 && i == 9)
{
continue;
}

putchar(',');
putchar(' ');

}
}
}
putchar('\n');
return (0);

}
