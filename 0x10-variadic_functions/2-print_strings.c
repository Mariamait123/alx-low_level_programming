#include <stddef.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_strings - prints strings, followed by a new line
  *@separator:string to be printed between the strings
  *@n: number of input strings
  *@...: input strings
  *Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *c;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(a, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(a);
	printf("\n");
}
