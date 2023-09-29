#include "main.h"
int prime(int n, int a);
/**
  *is_prime_number - finds if input is prime or not
  *@n: input number
  *Return: 1 if n is prime
  *returns 0 otherwise
  */
int is_prime_number(int n)
{
	if (n <= 3)
		return (0);
	return (prime(n, n - 1));
}
/**
  *prime - help find prime number
  *@n: input number
  *@a: iterator
  *Return: 1 if n is prime
  *returns 0 otherwise
  */
int prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (prime(n, a - 1));
}
