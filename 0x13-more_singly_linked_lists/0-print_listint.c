#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to the head //zakaria elaroussi
 *
 * Return: the number nodes
 */
size_t print_listint(const listint_t *h)
{
size_t counterx = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
counterx++;
}

return (counterx);
}
