#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  *print_numbers - prints numbers, followed by a new line
  *@separator: string to be printed between numbers
  *@n: number of input arguments
  *@...: input numbers to be printed
  *Return: othing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i = 0;

	va_start(a, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(a, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
