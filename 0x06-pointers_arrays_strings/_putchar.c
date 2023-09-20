#include <unistd.h>
/**
  *_putchar - prints input char
  *@c: input char
  *Return: o for success
  *on error, -1 is returned, errno is set appropriatly
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
