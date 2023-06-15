#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth
 * @head: Pointer to the head of the list
 * @index: Index of the node 0
 * Return: Pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int count = 0;
while (current != NULL)
{
if (count == index)
return (current);
count++;
current = current->next;
}

return (NULL);
}
