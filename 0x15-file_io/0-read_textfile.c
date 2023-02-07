#include "main.h"

/**
 * read_textfile - reads text file and prints to POSIX std output
 * @filename: file to be read
 * @letters: num of letters to be read and printed
 * Return: num written or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fdr, fdw;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	fdr = read(fd, buff, letters);
	if (fdr == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	fdw = write(STDOUT_FILENO, buff, fdr);
	if (fdw == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	if (fdw != fdr)
		return (0);

	free(buff);
	close(fd);

	return (fdw);
}
