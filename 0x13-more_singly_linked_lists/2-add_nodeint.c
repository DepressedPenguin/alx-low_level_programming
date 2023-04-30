#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of list
 *
 * @head: A pointer to the head.
 * @n: The integer      //zakaria elaroussi
 *
 * Return: If the function fails - NULL or add new element
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node, *current;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
current = *head;

while (current->next != NULL)
current = current->next;

current->next = new_node;
}

return (new_node);
}
