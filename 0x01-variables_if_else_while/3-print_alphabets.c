#include <stdio.h>
#include <ctype.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch, i;

ch = 'a';
while (ch != ('z' + 1))
{
putchar(ch);
ch += 1;
}
for (i = 'a' ; i <= 'z'; i++)
{
putchar(toupper(i));
}
putchar('\n');

return (0);
}
