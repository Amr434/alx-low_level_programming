#include <stdio.h>
/**
*main - this entry point
*Return: Alaws return 0
*/
int main(void)
{
int i;

for (i = 1 ; i <= 100 ; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("%s ", "FizzBuzz");
}
else if (i % 3 == 0)
{
printf("%s ", "Fizz");
}
else if (i % 5 == 0)
{
printf("%s ", "Buzz");
}
else
{
if (i > 9)
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
}
}
return (0);
}
