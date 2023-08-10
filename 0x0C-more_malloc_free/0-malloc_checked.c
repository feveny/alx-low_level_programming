#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory
 * @b: size of memory
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *s = NULL;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
