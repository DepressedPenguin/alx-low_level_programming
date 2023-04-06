#include "main.h"

/**
 * _pow_recursion - function that returns the value of x power y
 * @x: This is the base num //zakaria elaroussi
 * @y: This is the exponent or power
 * Return: the return value of x
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
