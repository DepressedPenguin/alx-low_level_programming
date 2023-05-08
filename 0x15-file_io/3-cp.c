#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int validate_args(int arg_count, char **arg_values);
int copy_file(char *source_path, char *destination_path);

/**
* main - Entry point
* @arg_count: Argument count
* @arg_values: Array of pointers to arguments
*
* Return: Exit status code
*/
int main(int arg_count, char **arg_values)
{
int status;

if (validate_args(arg_count, arg_values) != 0)
return 1;

status = copy_file(arg_values[1], arg_values[2]);

return status;
}

/**
* validate_args - Validates the number of arguments and files
* @arg_count: Argument count
* @arg_values: Array of pointers to arguments
*
* Return: 0 if valid, 1 otherwise
*/
int validate_args(int arg_count, char **arg_values)
{
int file_descriptor;

if (arg_count != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
return 1;
}

file_descriptor = open(arg_values[1], O_RDONLY);
if (file_descriptor == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg_values[1]);
return 1;
}
close(file_descriptor);

return 0;
}

/**
* copy_file - Copies the contents of one file into another
* @source_path: Path to source file
* @destination_path: Path to destination file
*
* Return: 0 on success or error code on failure
*/
int copy_file(char *source_path, char *destination_path)
{
int source_fd, destination_fd;
char buffer[BUFFER_SIZE];
ssize_t n_read, n_written;

source_fd = open(source_path, O_RDONLY);
if (source_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_path);
return 98;
}

destination_fd = open(destination_path, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (destination_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_path);
close(source_fd);
return 99;
}

while ((n_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
{
n_written = write(destination_fd, buffer, n_read);
if (n_written != n_read || n_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_path);
close(source_fd);
close(destination_fd);
return 99;
}
}

if (n_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_path);
close(source_fd);
close(destination_fd);
return 98;
}

if (close(source_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", source_fd);
close(destination_fd);
return 100;
}

if (close(destination_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", destination_fd);
return 100;
}

return 0;
}
