#include "main.h"
/**
*list_len - func get number of nodes
*@h: pointer to list node
*Return: number of nodes
*/
size_t list_len(const list_t *h)
{
int i = 0;
const list_t *ptr = h;
while (ptr != NULL)
{
i++;
ptr = ptr->next;
}

return (i);
}
