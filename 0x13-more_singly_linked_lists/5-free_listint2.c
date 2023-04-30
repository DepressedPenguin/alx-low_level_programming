#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Double pointer to the head.
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *current, *next;

if (head == NULL || *head == NULL)
return;

current = *head;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}

*head = NULL;
}
