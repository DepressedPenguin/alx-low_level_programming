#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes a node at a given in
 * @head: Pointer to the head
 * @index: Index of the node
 * Return: 1 upon success, -1
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *delete_node;
	unsigned int i;

	i = 0;
	current_node = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		delete_node = *head;
		*head = delete_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(delete_node);
		return (1);
	}

	while (current_node != NULL)
	{
		if (i == index - 1)
		{
			delete_node = current_node->next;
			if (delete_node != NULL)
			{
				current_node->next = delete_node->next;
				if (delete_node->next != NULL)
					delete_node->next->prev = current_node;
				free(delete_node);
				return (1);
			}
		}

		current_node = current_node->next;
		i++;
	}

	return (-1);
}
