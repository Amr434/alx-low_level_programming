#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
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
int i, j, result = 0;

for (i = 1 ; i < arcg ; i++)
{
int x = strtol(argv[i], NULL, 10);

for (j = 0 ; argv[i][j] != '\0' ; j++)
{
if (!isdigit(argv[i][j]))
{

printf("%s\n", "Error");
return (1);
}

}
result = result + x;
}
printf("%d\n", result);
}
else
{

printf("%s\n", "0");
}
return (0);
}
