#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates a memory of array
 * @nmemb: array elements
 * @size: Memory size
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	x = malloc(nmemb * size);
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		x[i] = 0;
	}
	return (x);
}
