#include <stdio.h>
/**
 * main - Entry point
 * 
 * Description: 'the program's description'
 * @parameter: describe the parameter
 * 
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	return;
}
