#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char ch;
ch = 'a';

for (ch = 'a' ; ch <= 'z' ; ch++)
{

if (ch == ('p' + 1) || ch == ('d' + 1))
{
continue;
}
putchar(ch);
}
putchar('\n');
return (0);
}

