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
listint_t *new_node, *last_node = *head;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (last_node->next != NULL)
last_node = last_node->next;

last_node->next = new_node;

return (new_node);
}
