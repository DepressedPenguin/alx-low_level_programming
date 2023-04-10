#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 * @argc: The number of arguments
 * @argv: An array of pointers arguments
 *
 * Return: (0) or (1)
 */
int main(int argc, char *argv[])
{
int x, a, summ;

summ = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (x = 1; x < argc; x++)
{
for (a = 0; argv[x][a]; a++)
{
if (!isdigit(argv[x][a]))
{
printf("Error\n");
return (1);
}
}
summ += atoi(argv[x]);
}

printf("%d\n", summ);

return (0);
}
