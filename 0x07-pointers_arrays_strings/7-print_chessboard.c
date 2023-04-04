#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @(*a)[8]: This is a pointer to a two-dimensional //Zakaria Elaroussi
 * @a: is a pointer to an array of 8 characters
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
int n, b;
for (n = 0; n < 8; n++)
{
for (b = 0; b < 8; b++)
{
_putchar(a[n][b]);
}
_putchar('\n');
}
}
