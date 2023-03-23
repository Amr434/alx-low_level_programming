#include <stddef.h>
/**
*int_index - function search for match integer.
*@array: arr of integer.
*@size: size of arr.
*@cmp: function call back.
*Return: if match return index else return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (array && cmp)
{
if (size <= 0)
{
return (-1);
}
else
{

int i;

for (i = 0 ; i < size ; i++)
{
if (cmp(array[i]))
return (i);
}

return (-1);
}
}
return (-1);
}

