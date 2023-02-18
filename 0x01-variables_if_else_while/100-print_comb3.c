#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{

int x, i;
for (x = 0 ; x < 10 ; x++)
{
for (i = x + 1 ; i < 10 ; i++)
{

putchar('0' + x);
putchar('0' + i);

if (x == 8 && i == 9)
{
continue;
}

putchar(',');
putchar(' ');

}
}
putchar('\n');
return (0);

}
