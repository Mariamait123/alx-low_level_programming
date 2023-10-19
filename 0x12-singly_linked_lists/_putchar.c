#include "lists.h"
#include <unistd.h>
/**
  *_putchar: prints c
  *@c: input char
  *Return: 1 for success and -1 for error
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
