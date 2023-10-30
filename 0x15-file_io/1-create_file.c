#include "main.h"
/**
  *create_file - function that creates a file
  *@filename: input file
  *@text_content: NULL terminated string to write to the file
  *Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int f, r = 1, count = 0;

	if (!filename)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
			count++;
		r = write(f, text_content, count);
	}
	if (r == -1)
		return (-1);
	close(f);
	return (1);
}
