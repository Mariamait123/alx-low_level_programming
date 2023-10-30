#include "main.h"
/**
  *read_textfile - reads a text file and prints it to the POSIX
  *@filename: input file
  *@letters: number of letters it should read and print
  *Return: actual number of letters it could read and print
  *returns 0 if file is NULL or it can't be opened
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t nr, nw;
	char *c;

	if (filename == NULL)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	c = malloc(sizeof(char *) * letters);
	if (!c)
		return (0);
	nr = read(i, c, letters);
	if (nr == -1)
	{
		close(i);
		free(c);
		return (0);
	}
	nw = write(STDOUT_FILENO, c, nr);
	if (nw == -1)
	{
		close(i);
		free(c);
		return (0);
	}
	close(i);
	free(c);
	return (nr);
}
