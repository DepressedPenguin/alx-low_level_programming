#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @num1: first number
 * @num2: second number
 * //zakaria elaroussi
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
unsigned int counts = 0;
unsigned long int xor_result = num1 ^ num2;
while (xor_result)
{
counts += xor_result & 1;
xor_result >>= 1;
}
return (counts);
}
