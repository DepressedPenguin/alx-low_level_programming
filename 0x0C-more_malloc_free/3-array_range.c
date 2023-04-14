#include <stdlib.h>

/**
 * array_range - creates an array of integers min and max
 * @min: value min
 * @max: value max
 *
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *p;
	int a, sizee;

	if (min > max)
		return (NULL);

	sizee = max - min + 1;
	p = malloc(sizeof(int) * sizee);

	if (!p)
		return (NULL);

	for (a = 0; a < sizee; a++)
		p[a] = min++;

	return (p);
}
