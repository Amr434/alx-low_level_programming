#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*array_range - create range of num
*@min: start.
*@max: end.
*Return: if min > max NULL else range from min to max
*/

int *array_range(int min, int max)
{
int n, i;
int *arr;
if (min > max)
return (NULL);

n = max - min;


arr = malloc((n + 1) * sizeof(int));
if (arr ==  NULL)
return (NULL);

for (i = 0 ; i <= n ; i++)
{
arr[i] = min;
min++;
}

return (arr);

}
