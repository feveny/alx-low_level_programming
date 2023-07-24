#include "main.h"
/**
 *swap_int - Swaps two integers
 *@a: Input 1
 *@b: Input 2
 *Return: Nothing
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
