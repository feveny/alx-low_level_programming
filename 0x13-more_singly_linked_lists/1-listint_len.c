#include "lists.h"

/**
 *listint_len - prints no of elements of listint_t
 *@h: list to print
 *Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h != NULL)
{
num++;
h = h->next;
}
return (num);
}
