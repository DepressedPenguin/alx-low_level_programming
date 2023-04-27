#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer to the head of the list //zakaria elaroussi
 * @str: string
 *
 * Return: the address of the new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;
	return (new_node);
}

/**
 * _strlen - returns the length of str
 * @str: string
 *
 * Return: length of str
 */
int _strlen(char *str)
{
int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

