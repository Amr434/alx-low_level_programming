#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
*cap_string - capitalizes all words of a string.
*@str: array of charachter
*Return: return arr after capitalizes all words
*/
char *cap_string(char *str)
{
int length, i;
length = strlen(str);

for (i = 0 ; i < length ; i++)
{
if (str[i] == '\n' ||  str[i] == ' '  || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?' || str[i] == '\"' || str[i] == '(' || str[i] == ')' || str[i] == '}' || str[i] == '{')
str[i + 1] = toupper(str[i + 1]);

if (str[i] == '\t')
{
str[i] = ' ';
str[i + 1] = toupper(str[i + 1]);
}
str[i] = str[i];
}
return (str);
}
