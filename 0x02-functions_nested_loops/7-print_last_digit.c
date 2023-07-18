#include "main.h"

/**
 * print_last_digit - prints the last digit of a num
 *
 * @n: input int
 *
 * Return: the last degit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		int a = -1 * (n % 10);

		_putchar(a + 48);
		return (a % 10);
	}
	else
	{
		int b = n % 10;

		_putchar(b + 48);
		return (b);
	}
}
