#include <unistd.h>
/**
  *_pushchar - prints char
  *@c: input char
  *Return: 1 for success
  *returns -1 ofr error
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
