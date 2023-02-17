#include<stdio.h>
#include <stdlib.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int num;

num = rand() - RAND_MAX / 2;

srand(time(0));

if (num > 0)
printf("%d is positive\n", num);
if (num < 0)
{
printf("%d is negative\n", num);
}
if( (num == 0)
{
printf("%d is zero\n", num);
}
return (0);
}
