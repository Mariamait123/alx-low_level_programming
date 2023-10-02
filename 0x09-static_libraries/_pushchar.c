#include <unistd.h>
/**
  *_putchar - prints char
  *@c: input char
  *Return: 0 for success
  *returns -1 when thereis error
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
