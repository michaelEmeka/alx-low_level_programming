#include "main.h"

/**
 * read_textfile - this function prints text files.
 * @filename: this is the name of file ti be read
 * @letters: number of letters to be read.
 * Return: 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);
	free(buf);

	return (nwr);
}
