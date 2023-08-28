#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list.
 * @head: douuble pointer to the beginning of list
 * @n: integer to add to a list
 *
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
