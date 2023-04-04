#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - unction that prints the sum of the two diagonals
 * @size: This is an integer.
 * @a: This is a pointer to the first element //Zakaria Elaroussi
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
int mul1 = 0, mul2 = 0, i = 0;
while (i < size)
{
mul1 += *(a + i * size + i);
mul2 += *(a + i * size + size - i - 1);
i++;
}
printf("%d, %d\n", mul1, mul2);
}
