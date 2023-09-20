#include "main.h"
/**
  *reverse_array - reverses the content of an array of integers
  *@a: arry being reversed
  *@n: number of elements of the array
  */
void reverse_array(int *a, int n)
{
	int s = 0, d;

	n--;
	while (s < n)
	{
		d = a[s];
		a[s] = a[n];
		a[n] = d;
		n--;
		s++;
	}
}
