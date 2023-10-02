#include "main.h"
/**
  *_puts - prints string
  *@s: input string
  */
void _puts(char *s)
{
	while (*s != '\0')
		_putchar(*s++);
	_putchar('\n');
}
