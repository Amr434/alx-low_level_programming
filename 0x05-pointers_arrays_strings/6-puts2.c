#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*puts2 - print even num
*@str: array charachter
*/
void puts2(char *str)
{
int length, i;

length = strlen(str);

for (i = 0 ; i < length ; i++)
{
if (*(str + i) % 2 == 0)
_putchar(*(str + i));
}
_putchar('\n');
}
