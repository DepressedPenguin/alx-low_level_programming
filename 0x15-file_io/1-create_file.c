#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: The name of the file.
 * @text_content: The text content to write.
 *
 * Return: 1 on success or -1.
 * The created file must have permissions: rw-------.
 * If the file already exists
 * If @filename is NULL or -1.
 * If @text_content is NULL, an empty file created.
 */
int create_file(const char *filename, char *text_content)
{
int file_descriptor, write_res, close_res;
size_t text_len = 0;
mode_t perms = S_IRUSR | S_IWUSR;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[text_len] != '\0')
text_len++;

file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, perms);
if (file_descriptor == -1)
return (-1);

write_res = write(file_descriptor, text_content, text_len);
if (write_res == -1)
{
close(file_descriptor);
return (-1);
}

close_res = close(file_descriptor);
if (close_res == -1)
return (-1);
}
else
{
file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, perms);
if (file_descriptor == -1)
return (-1);

close_res = close(file_descriptor);
if (close_res == -1)
return (-1);
}
return (1);
}
