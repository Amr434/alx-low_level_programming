#include<stdio.h>
/**
*main - main Entry point of program
*@arcg: number of argument in argv.
*@argv: array of string.
*Return: main return 0 mean project success.
*/
int main(int arcg, char *argv[])
{
int i;

for (i = 0 ; i < arcg ; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
