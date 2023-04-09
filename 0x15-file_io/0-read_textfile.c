#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buf, letters);
	if (bytes_read < 0)
	{
		close(fd);
		free(buf);
		return (0);
	}

	buf[bytes_read] = '\0';
	close(fd);

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	free(buf);

	if (bytes_written < 0 || (size_t)bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}

