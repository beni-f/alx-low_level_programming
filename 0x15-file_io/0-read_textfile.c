#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: file name
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nread = read(fd, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	close(fd);

	free(buffer);

	return (nwrite);
}
