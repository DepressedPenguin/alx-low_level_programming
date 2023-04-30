#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end o
 * @head: pointer to a pointer. //zakaria elaroussi
 * @n: value .
 *
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_s, *last_e = *head;

new_s = malloc(sizeof(listint_t));
if (new_s == NULL)
return (NULL);

new_s->n = n;
new_s->next = NULL;

if (*head == NULL)
{
*head = new_s;
return (new_s);
}

while (last_e->next != NULL)
last_e = last_e->next;

last_e->next = new_s;

return (new_s);
}
