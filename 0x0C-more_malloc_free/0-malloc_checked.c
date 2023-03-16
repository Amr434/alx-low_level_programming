#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: number of memory bytes to allocate
 *
 * Return: pointer to the allocated memory or exit normal with statis 98
 */

void *malloc_checked(unsigned int b)
{
<<<<<<< HEAD
void *memory;
memory  = malloc(b);
if (memory == NULL)
{
exit(98);
}
return (memory);

=======
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
>>>>>>> ab55d48b4efda50e7b46654f60e161b36ac9ac26
}
