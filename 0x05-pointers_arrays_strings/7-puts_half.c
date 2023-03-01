#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*puts_half - print half string
*@str: array of charachter
*/
void puts_half(char *str)
{
int length, i;
length = strlen(str);
if (length % 2 == 0)
{
for (i = length / 2  ; i < length  ; i++)
{
_putchar(*(str + i));
}

}
else
{
for (i = (length - 1) / 2  ; i < length  ; i++)
{
_putchar(*(str + i));
}

}
_putchar('\n');
}
