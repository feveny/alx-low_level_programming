#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
*
*@b: char 
*Return: the converted number, or 0 if string b that is no 0 or 1, b is NULL
*
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int dec = 0;

if (!b)
return (0);
for (i = 0; b[i]; i++)
	{
if (b[i] < '0' || b[i] > '1')
return (0);
		dec = 2 * dec + (b[i] - '0');
	}
retrn (dec);
}
