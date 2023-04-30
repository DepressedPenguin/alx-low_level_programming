#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head node
 * @head: double pointer.
 *
 * Return: the head node's data (g)
 */
int pop_listint(listint_t **head)
{
listint_t *tempt;
int n;

if (*head == NULL)
return (0);

tempt = *head;
n = tempt->n;
*head = (*head)->next;
free(tempt);

return (n);
}
