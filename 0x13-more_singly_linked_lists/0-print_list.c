#include "lists.h"
/**
*print_list - fun print linked list_t
*@h: pointer to list nodes
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{

int i = 0;
const list_t *ptr;

ptr = h;

while (ptr != NULL)
{
if (ptr->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", ptr->len, ptr->str);
}
ptr = ptr->next;
i++;
}
return (i);
}

