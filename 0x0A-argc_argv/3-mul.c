#include<stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - main Entry point of program
*@arcg: number of argument in argv.
*@argv: array of string.
*Return: main return 0 mean project success.
*/
int main(int arcg, char *argv[])
{
if (arcg > 1)
{
int i, result = 1;

for (i = 1 ; i < arcg ; i++)
{
int x = strtol(argv[i], NULL, 10);
result = result * x;
}
printf(" %d\n", result);
return (0);
}
else
{

printf("%s\n", "Error");
return (1);
}
}
