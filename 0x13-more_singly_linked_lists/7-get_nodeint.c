#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
 * @head: A pointer to the head.
 * @index: The index of the node
 *
 * Return: If the node does not exist - NULL,nth
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x;

for (x = 0; head && x <= index; x++)
{
if (x == index)
return (head);
head = head->next;
}

return (NULL);
}
