#include <stddef.h>
/**
*array_iterator - func iterate on an array and.
*@array: array of argument.
*@size: array size.
*@action: call back function.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (action == NULL || array == NULL)
{
return;
}
else
{
int i;

for (i = 0 ; i < (int)size ; i++)
{
action(array[i]);
}
}
}
