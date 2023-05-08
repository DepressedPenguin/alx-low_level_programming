#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text content to append.
 *
 * Return: 1 on success, -1.
 * If @filename is NULL, returns -1. //zakaria elaroussi
 * If @text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fdd, write_res, close_res;
size_t text_len = 0;

if (filename == NULL)
return (-1);

if (text_content == NULL)
return (1);

fdd = open(filename, O_WRONLY | O_APPEND);
if (fdd == -1)
return (-1);

while (text_content[text_len] != '\0')
text_len++;

write_res = write(fdd, text_content, text_len);
if (write_res == -1)
{
close(fdd);
return (-1);
}

close_res = close(fdd);
if (close_res == -1)
return (-1);

return (1);
}

