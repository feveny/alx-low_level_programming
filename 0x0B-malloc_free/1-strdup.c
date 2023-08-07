#include "main.h"
#include <stdlib.h>
/**
 **_strdup - returns a pointer to a newly allocated space in memory
 *@str: Input string
 *Return: Pointer to array or NULL
 */

char *_strdup(char *str)
{
	char *ar;
	unsigned int i = 0, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length])
		length++;

	ar = malloc((length + 1) * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}

	while (i < length)
	{
		ar[i] = str[i];
		i++;
	}

	return (ar);
}
