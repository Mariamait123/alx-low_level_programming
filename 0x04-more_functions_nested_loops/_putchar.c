#include "main.h"
#include <unistd.h>
/**
  *_putchar - prints characters
  *@c: character being printed
  *Return: 1 when  succes
  *on error, -1 is returned, errno is set appropriatly
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
