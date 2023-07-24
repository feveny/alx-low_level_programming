#include "main.h"
/**
 * puts2 - prints every other charactor
 * @str: input charactor
 * Return: every  other char
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		int n;

		n = i % 2;
		if (n == 0)
		{
			_putchar(str[i]);
		}
	}
		_putchar(10);
}
