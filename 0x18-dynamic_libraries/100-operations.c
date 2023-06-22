/**
 * add - Adds two int
 * @a: The first int
 * @b: The second int
 *
 * Return: The sum of the two integers.
 */
int add(int a, int b)
{
return (a + b);
}
/**
 * sub - Subtracts a and b
 * @a: The first int
 * @b: The second int
 *
 * Return: The result of the subtraction (a - b).
 */
int sub(int a, int b)
{
return (a - b);
}
/**
 * mul - Multiplies two int
 * @a: The first int
 * @b: The second int
 *
 * Return: The product of the two integers.
 */
int mul(int a, int b)
{
return (a * b);
}
/**
 * div - Divides two int
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The quotient of the division (a / b).
 */
int div(int a, int b)
{
return (a / b);
}
/**
 * mod - Divides two integers.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The quotient of the division (a / b).
 */
int mod(int a, int b)
{
if (b != 0)
{
return (a % b);
}
else
{
return (0);
}
}
