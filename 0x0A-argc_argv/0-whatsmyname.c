#include "main.h"
#include <stdio.h>
/**
*main - main Entry point of program
*@arcg: number of argument in argv.
*@argv: array of string.
*Return: main return 0 mean project success.
*/
int main(__attribute__((unused)) int arcg, char *argv[])
{
if (arcg > 0)
printf("%s\n", argv[0]);

return (0);
}
