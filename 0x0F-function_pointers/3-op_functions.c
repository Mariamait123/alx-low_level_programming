#include <stdio.h>
#include "3-calc.h"
/**
  *op_add - adds two numbers
  *@a: input number
  *@b: input number
  *Return: the sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  *op_sub - sub two numbers
  *@a: input number
  *@b: input number
  *Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  *op_mul - mult two numbers
  *@a: input number
  *@b: input number
  *Return: a * b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  *op_div - divides two numbers
  *@a: input number
  *@b: input number
  *Return: a /b
  *return null if b=0
  */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  *op_mod - reminder of a/b
  *@a: input int
  *@b: input number
  *Return: a%b
  *returns null if  b=0
  */
int op_mod(int a, int b)
{
	return (a % b);
}
