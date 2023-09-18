#include "main.h"
#include <unistd.h>
/**
  *_putchar - prints characters
  *@c: character printed
  *Return: 0 for success
  *on error, -1 is returned, errno is set appropriatly
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
