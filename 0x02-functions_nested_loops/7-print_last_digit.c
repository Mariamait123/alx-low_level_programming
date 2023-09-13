#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: input number
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
	int k;

	k = a % 10;
	_putchar(k);
	return (k);
}
