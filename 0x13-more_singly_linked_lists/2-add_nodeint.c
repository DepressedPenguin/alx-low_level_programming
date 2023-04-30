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
	listint_t *new_e;

	if (head == NULL)
	return (NULL);

	new_e = malloc(sizeof(listint_t));
	if (new_e == NULL)
	return (NULL);

	new_e->n = n;
	new_e->next = *head;
	*head = new_e;

	return (new_e);
}
