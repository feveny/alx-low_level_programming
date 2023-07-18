#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char alp;
	int a = 0;
while (a < 10)
{
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
	a++;
}
}
