#include <unistd.h>
/**
  *_putchar - prints char c
  *@c: input char
  *Return: 1 for success
  *returns -1 for error
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
