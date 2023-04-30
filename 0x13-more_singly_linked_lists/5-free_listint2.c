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
listint_t *cr, *nextone;

if (head == NULL || *head == NULL)
return;

cr = *head;

while (cr != NULL)
{
nextone = cr->next;
free(cr);
cr = nextone;
}

*head = NULL;
}
