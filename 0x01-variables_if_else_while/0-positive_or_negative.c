#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main(void)
{
srand(time(NULL));
int num;

num = rand();

if (num > 0)
printf("%d is positive\n", num);
else if (num == 0)
{
printf("%d is zero\n", num);
}
else
{
printf("%d is negative\n", num);
}
return (0);
}
