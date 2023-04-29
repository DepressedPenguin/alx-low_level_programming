#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function that returns the number of elements in a linked listint_t list.
 * @h: pointer to the head.
 *
 * Return: the number (nodes) //zakaria elaroussi
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}

return (count);
}
