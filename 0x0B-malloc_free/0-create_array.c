#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of charactors
 * @size: size of array created
 * @c: initial charactor
 * Return: Char
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ar = malloc(size * sizeof(char));
		if (ar == 0)
		{
			return (NULL);
		}
		while (i < size)
		{
			ar[i] = c;
			i++;
		}
	}
	return (ar);
}
