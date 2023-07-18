#include "main.h"
/**
 * print_sign - print sign of a number
 *
 * @n: input integer
 *
 * Return: 1 for poisitive, 0 for zero and -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
