#include <stdio.h>
#include "lists.h"

/**
 * Print_dlistint - A Doubly linkedlist of integers is printed
 *
 * @h: A pointer to the first element of a list
 *
 * Return: The num of element printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
