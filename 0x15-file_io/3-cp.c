#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdarg.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints an error message to the standard
 *                        error and exits the program.
 * @exit_code: The exit code to use when terminating the program.
 * @format: The format string for the error message.
 * @...: Additional arguments for the format string.
 */
void print_error_and_exit(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, "Error: ");
	vdprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
int src_fd, dest_fd, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];
mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

/* Check if the correct number of arguments was provided */
if (argc != 3)
print_error_and_exit(97, "Usage: cp file_from file_to\n");

/* Open the source file for reading */
src_fd = open(argv[1], O_RDONLY);
if (src_fd == -1)
print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);

/* Open the destination file for writing */
dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
if (dest_fd == -1)
print_error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);

/* Copy the contents of the source file to the destination file */
while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(dest_fd, buffer, bytes_read);
if (bytes_written == -1)
print_error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
}

/* Check if any errors occurred during reading from the source file */
if (bytes_read == -1)
print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);

/* Close both the source and destination file descriptors */
if (close(src_fd) == -1)
print_error_and_exit(100, "Error: Can't close file descriptor %d\n", src_fd);

if (close(dest_fd) == -1)
print_error_and_exit(100, "Error: Can't close file descriptor %d\n", dest_fd);

return (0);
}

