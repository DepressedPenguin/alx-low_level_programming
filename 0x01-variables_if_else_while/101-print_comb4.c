#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int d, p, r;

for (d = '0'; d <= '7'; d++)
{
for (p = d + 1; p <= '8'; p++)
{
for (r = p + 1; r <= '9'; r++)
{
putchar(d);
putchar(p);
putchar(r);

if (d == '7' && p == '8' && r == '9')
continue;

putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}

