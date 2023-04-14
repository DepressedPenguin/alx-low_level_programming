#include <stdlib.h>
/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: s1 string
 * @s2: s2 string
 * @n: is unsigned int
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int p1, p2, t, f;

if (!s1)
s1 = "";
if (!s2)
s2 = "";
for (t = 0; s1[t] != '\0'; t++)
for (f = 0; s2[f] != '\0' && f < n; f++)
str = malloc(sizeof(char) * (t + f + 1));
if (!str)
return (NULL);
for (p1 = 0; p1 < t; p1++)
str[p1] = s1[p1];
for (p2 = 0; p2 < f; p2++)
str[p1 + p2] = s2[p2];
str[p1 + p2] = '\0';
return (str);
}
