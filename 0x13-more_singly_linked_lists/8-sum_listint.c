#include "lists.h"

/**
 * sum_listint - unction that returns the sum of all the data (n)
 * @head: pointer to the first.
 *
 * Return: sum of all the data in the list or 0
 */
int sum_listint(listint_t *head)
{
int sumthem = 0;
listint_t *cu = head;

while (cu != NULL)
{
sumthem += cu->n;
cu = cu->next;
}

return sumthem;
}
