#include <stdio.h>
/**
*_strlen_recursion - print length of arr
*@s: arr of argu.
*Return: return length of arr.
*/
int _strlen_recursion(char *s)
{
int n = 0;

if (*s == '\0')
{

return (0);
}
n++;

return (n + _strlen_recursion(s + 1));
}
