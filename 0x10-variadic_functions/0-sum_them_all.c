#include <stdarg.h>
#include "variadic_functions.h"
/**
  *sum_them_all - add input arguments
  *@n: number of input arguments
  *@...: input arguments
  *Return: 0 if n = 0
  *otherwise returns the sum of arguents
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);
	va_start(a, n);
	for (; i < n; i++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
