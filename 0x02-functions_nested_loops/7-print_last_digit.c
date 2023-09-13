#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: input number
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
	int k;

	if (a < 0)
		a = -a;
	k = a % 10;
	if (k < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
