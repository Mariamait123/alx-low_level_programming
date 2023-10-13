#include <stddef.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
void print(int i, char *c, const char * const format, va_list a);
/**
  *print_all - prints anything
  *@format: list of types of arguments
  *@...: arguments to be printed
  */
void print_all(const char * const format, ...)
{
	va_list a;
	int i = 0;
	char *c = "";

	if (format == NULL)
	{
		printf(" ");
		return;
	}
	va_start(a, format);
	print(i, c, format, a);
	printf("\n");
	va_end(a);
}
/**
  *print - prints
  *@i: input i
  *@c: inpt char
  *@format: list of types of arguments
  *@...: arguments to be printed
  *@a: input va_list
  */
void print(int i, char *c, const char * const format, va_list a)
{
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				{
					printf("%c", va_arg(a, int));
					break;
				}
			case 'i':
				{
					printf("%i", va_arg(a, int));
					break;
				}
			case 'f':
				{
					printf("%f", va_arg(a, double));
					break;
				}
			case 's':
				{
					c = va_arg(a, char *);
					if (c == NULL)
						c = "(nil)";
					printf("%s", c);
					break;
				}
			default:
				{
					i++;
					continue;
				}
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(a);
}

