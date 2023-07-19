#include <stdio.h>

/**
 *main - Finds and prints the sum of the even-valued terms
 *
 *Return: Always (0)
 */

int main(void)
{
int feb, a, b, c;

	a = 1;
	b = 2;
	feb = 0;

	while (b < 4000000)
	{
		if (b % 2 == 0)
		{
			feb += b;
		}
		c = b;
		b += a;
		a = c;
	}
	printf("%d\n", feb);
	return (0);
}
