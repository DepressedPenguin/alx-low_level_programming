#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer .
 * @str: string will be copied
 *
 * Return: 0 or ptr.
 */


char *_strdup(char *str)

{
char *copy_s = (char *) malloc(10);

if (str == NULL)

{
return (NULL);
}

else
{
_strcpy(copy_s, str);
return (copy_s);
}

}
