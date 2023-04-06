#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: single integer parameter n //zakaria elaroussi
 * Return: the return value is an integer
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
