#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: This is a pointer to a string //zakaria elaroussi
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return ((1) + _strlen_recursion(s + 1));
}
