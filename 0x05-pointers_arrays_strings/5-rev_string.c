#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*rev_string - reverse string by refer
*@s: array of string
*/
void rev_string(char *s)
{
int length, j, i;

length = strlen(s);
j = 0;
for (i = length - 1 ; i >= length / 2 ; i--)
{
char c = (s[j]);

s[j] = *(s + i);
s[i] = c;
j++;
}
}
