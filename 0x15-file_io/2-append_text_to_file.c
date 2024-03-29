#include "main.h"
#include <string.h>
/**
  *append_text_to_file - function that appends text at the end of a file
  *@filename: input file
  *@text_content: NULL terminated string to add at the end of the file
  *Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	wr = write(fd, text_content, strlen(text_content));
	i = strlen(text_content);
	if (wr == -1 || wr != i)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
