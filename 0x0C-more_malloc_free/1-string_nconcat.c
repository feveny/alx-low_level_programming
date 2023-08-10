#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatinates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatinate
 * Return: concatinated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int c, c1;
	int sign = n;
	char *ptr;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (sign >= len2)
	{
		sign = len2;
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (c = 0; c < len1; c++)
	{
		ptr[c] = s1[c];
	}
	for (c1 = 0; c1 < sign; c1++)
	{
		ptr[c++] = s2[c1];
	}
	ptr[c++] = '\0';
	return (ptr);
}
