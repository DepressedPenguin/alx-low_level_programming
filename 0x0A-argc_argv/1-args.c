#include <stdio.h>

/**
 * main - that prints the number of arguments passed into it
 * @argc: counter
 * @argv: An argument values //zakaria
 * Return: (0)
 *
 */

int main(int argc, char *argv[])
{
if (argv[0])
printf("%d\n", argc - 1);
return (0);
}
