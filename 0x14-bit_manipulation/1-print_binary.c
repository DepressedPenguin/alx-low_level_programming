#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: number to be printed in binary.
 * //zakaria elaroussi yay
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
unsigned long int bite = 1;
int lens = 0;

while (bite <= n)
{
bite <<= 1;
lens++;
}

for (lens--; lens >= 0; lens--)
{
if (bite & n)
_putchar('1');
else
_putchar('0');

bite >>= 1;
}
}
