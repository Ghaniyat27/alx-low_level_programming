#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read txtfile and print it to STDOUT.
 * @filename: tet file is being read
 * @letters: numb of letters to be read
 * Return: w- the actual numb of bytes should read and printed
 *        0 when the function fails or if the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
