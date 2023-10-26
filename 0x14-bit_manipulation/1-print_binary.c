#include "main.h"
unsigned long int _pow(unsigned int base, unsigned int power);
/**
  *print_binary -  prints the binary representation of a number
  *@n: input number
  */
void print_binary(unsigned long int n)
{
	unsigned long int d, c;
	char f;

	f = 0;
	d =  _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		c = d & n;
		if (c == d)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || d == 1)
			_putchar('0');
		d >>= 1;
	}
}
/**
  *_pow - calculates (base ^ power)
  *@base: base of the exponent
  *@power: power of the exponent
  *Return: (base ^ power)
  */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned int a = 1;
	unsigned long int n;

	n = 0;
	for (; a <= power; a++)
		n *= base;
	return (n);
}
