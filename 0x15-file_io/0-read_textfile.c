#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: The name of the file.
 * @letters: The number of letters.
 *
 * Return: The actual number of letters or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fds;
ssize_t bytes_r, bytes_wr;
char *buffer;

if (filename == NULL)
return (0);

fds = open(filename, O_RDONLY);

if (fds == -1)
return (0);

buffer = malloc(sizeof(char) * (letters + 1));

if (buffer == NULL)
{
close(fds);
return (0);
}

bytes_r = read(fds, buffer, letters);

if (bytes_r == -1)
{
free(buffer);
close(fds);
return (0);
}

bytes_wr = write(STDOUT_FILENO, buffer, bytes_r);

free(buffer);

close(fds);

if (bytes_wr == -1 || bytes_wr != bytes_r)
return (0);

return (bytes_wr);
}
