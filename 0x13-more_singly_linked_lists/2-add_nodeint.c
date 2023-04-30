#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 *
 * @head: A pointer to a pointer
 * @n: The data.     //zakaria elaroussi
 *
 * Return: Iffunction fails - NULL.
 *
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
