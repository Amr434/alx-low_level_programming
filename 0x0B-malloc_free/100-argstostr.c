/**
*argstostr - combine program paramter.
*@ac: number of argument.
*@av: array of arguments.
*Return: array of combine argu
*/
#include <stdio.h>
#include <stdlib.h>
char *argstostr(int ac, char **av)
{
int i, j, n, k;

char *arr;
if (ac == 0 || av == NULL)
return (NULL);
n = 0;
for (i = 0 ; i < ac ; i++)
{

for (j = 0 ; av[i][j] ; j++)
n++;

n++;
}

n++;

arr = malloc(n *sizeof(char));

k = 0;
for (i = 1 ; i <= ac ; i++)
{

for (j = 0 ; av[i][j] ; j++)
{
arr[k] = av[i][j];
k++;
}
arr[k] = '\n';
k++;
}

return (arr);

}
