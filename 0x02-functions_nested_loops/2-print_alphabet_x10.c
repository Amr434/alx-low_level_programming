#include<stdio.h>
#include "main.h"
/*
 * this func print alpha from a-z 10 time
*/
void print_alphabet_x10(void)
{
int i;
char ch;

for (i = 0 ; i < 10 ; i++)
{

for (ch = 'a' ; ch <= 'z' ; ch++)
{

_putchar(ch);

}

_putchar('\n');
}
}
