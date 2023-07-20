#include "main.h"
/**
 * print_most_numbers - prints most numbers
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
int i = 48;

while (i <= 57)
{
if (i != 50 && i != 52)
{
_putchar(i);
}
i++;
}
_putchar(10);
}
