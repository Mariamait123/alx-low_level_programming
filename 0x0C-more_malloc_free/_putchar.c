#include <unistd.h>p
/**
  *_putchar - prints char
  *@c: input char
  *Return: always 1 for success
  *returns -1 for error
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
